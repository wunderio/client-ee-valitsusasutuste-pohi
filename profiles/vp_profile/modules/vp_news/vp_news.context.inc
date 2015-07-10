<?php
/**
 * @file
 * vp_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function vp_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ap_news_exposed_form_news_page';
  $context->description = 'Exposed form: news page';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-news-news_page' => array(
          'module' => 'views',
          'delta' => '-exp-news-news_page',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Exposed form: news page');
  t('News');
  $export['ap_news_exposed_form_news_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ap_news_frontpage_news';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-8af4e23b469f7a9f88bcf3ed1244c2f2' => array(
          'module' => 'views',
          'delta' => '8af4e23b469f7a9f88bcf3ed1244c2f2',
          'region' => 'Top',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['ap_news_frontpage_news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ap_news_newsletter_multi_subscription';
  $context->description = 'Newsletter: Multi Subscription';
  $context->tag = 'News';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'newsletter' => 'newsletter',
        'uudiskiri' => 'uudiskiri',
        'podpisatsya-na-rassylku' => 'podpisatsya-na-rassylku',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'simplenews-0' => array(
          'module' => 'simplenews',
          'delta' => '0',
          'region' => 'content',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('Newsletter: Multi Subscription');
  $export['ap_news_newsletter_multi_subscription'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'article_news_block';
  $context->description = 'Subject related news block, 1+4 items';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'test-content' => 'test-content',
        'testartikkel' => 'testartikkel',
        'testsisu/alumiste-menuutasemete-testleht/testartikkel-kaks-3-taseme-menuus' => 'testsisu/alumiste-menuutasemete-testleht/testartikkel-kaks-3-taseme-menuus',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-19eef6f0bee85264121542d861111bec' => array(
          'module' => 'views',
          'delta' => '19eef6f0bee85264121542d861111bec',
          'region' => 'content',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('Subject related news block, 1+4 items');
  $export['article_news_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vp_news_blocks';
  $context->description = 'Blocks without visibility settings';
  $context->tag = 'News';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-5d0ca2e5fecdc7db5a2a1a917dab2bb0' => array(
          'module' => 'views',
          'delta' => '5d0ca2e5fecdc7db5a2a1a917dab2bb0',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'views-8b63b771a4e217953ac1d537c6ab26a7' => array(
          'module' => 'views',
          'delta' => '8b63b771a4e217953ac1d537c6ab26a7',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
        'views-f09b2921de187cba152bbeb961c4a0e1' => array(
          'module' => 'views',
          'delta' => 'f09b2921de187cba152bbeb961c4a0e1',
          'region' => 'sidebar_second',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks without visibility settings');
  t('News');
  $export['vp_news_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'vp_news_related_news';
  $context->description = 'More news on the same subject block attached to News node, 2 items';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-28b60dac48d416a8e6750a35cdd59247' => array(
          'module' => 'views',
          'delta' => '28b60dac48d416a8e6750a35cdd59247',
          'region' => 'content',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('More news on the same subject block attached to News node, 2 items');
  t('News');
  $export['vp_news_related_news'] = $context;

  return $export;
}
