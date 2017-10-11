/*global Drupal*/

import React, { Component } from 'react'
import { extend } from 'lodash'
import { SearchkitManager,SearchkitProvider, SelectedFilters, Hits, ReactDOM,
  SearchBox, Pagination, FilteredQuery, BoolShould, TermQuery,
  HitsStats, SortingSelector, NoHits, BooleanQuery,
  RangeFilter,
  ViewSwitcherHits, ViewSwitcherToggle, DynamicRangeFilter,
  InputFilter, GroupedSelectedFilters,
  Layout, TopBar, LayoutBody, LayoutResults,
  ActionBar, ActionBarRow, SideBar } from 'searchkit'

//const host = Drupal.settings.simple_elasticsearch.host
const host = 'http://localhost:9200';
const searchkit = new SearchkitManager(host)

/**
 * Filter searches using language.
 *
 * Code example from http://docs.searchkit.co/v0.6.2/docs/setup/default-query.html.
 */
searchkit.addDefaultQuery((query)=> {
  return query.addQuery(
    //TermQuery("language", Drupal.settings.simple_elasticsearch.language)
      TermQuery("language", 'en')
  )
})

/**
 * Add translations and integrate with Drupal.
 */
searchkit.translateFunction = (key) => {
  //let translations = {
  //  "searchbox.placeholder": Drupal.t("Search"),
  //  "hitstats.results_found": Drupal.t("{hitCount} results found"),
  //  "pagination.previous": Drupal.t("Previous"),
  //  "pagination.next": Drupal.t("Next"),
  //  "NoHits.NoResultsFound": Drupal.t('No results found for "{query}"'),
  //}
  let translations = {
    "searchbox.placeholder": "Search",
    "hitstats.results_found": "{hitCount} results found",
    "pagination.previous": "Previous",
    "pagination.next": "Next",
    "NoHits.NoResultsFound": 'No results found for "{query}"',
  }
  return translations[key]
}

const SimpleElasticsearchHitItem = (props)=> {
  const {bemBlocks, result} = props
  //let url = "http://www.imdb.com/title/" + result._source.imdbId
  const source:any = extend({}, result._source, result.highlight)
  return (
    <div className="result" data-qa="hit">
      <div data-qa="title" className={bemBlocks.item("title")} dangerouslySetInnerHTML={{__html:source.simple_elasticsearch_teaser}}>
      </div>
    </div>
  )
}

/**
 * Main app.
 *
 * <SearchBox />
 *  - queryFields defines what fields are we searching through
 *  - prefixQueryFields allows to search part of words
 *  - 10 should give weight over other fields (@todo: check this out)
 *
 * <Hits />
 *  - Needs simple_elasticsearch_teaser in filters so SimpleElasticsearchHitItem could use that for output.
 */
const App = ()=> (
  <SearchkitProvider searchkit={searchkit}>
    <Layout>
      <TopBar>
        </TopBar>
        <LayoutBody>
          <SideBar>
            <SearchBox
              id="query"
              autofocus={true}
              searchOnChange={true}
              queryFields={["title^10", "body"]}
              prefixQueryFields={["title^10", "body"]}/>
          </SideBar>
          <LayoutResults>
            <ActionBar>

              <ActionBarRow>
                <div className="stats">
                  <HitsStats/>
                </div>
              </ActionBarRow>

              <ActionBarRow>
                <SelectedFilters/>
              </ActionBarRow>

            </ActionBar>

            <Hits mod="sk-hits-grid" hitsPerPage={2} itemComponent={SimpleElasticsearchHitItem}
              sourceFilter={["title", "simple_elasticsearch_teaser"]}/>
            <NoHits/>

            <Pagination showNumbers={true}/>
          </LayoutResults>
      </LayoutBody>
    </Layout>
  </SearchkitProvider>
)

export default App;
