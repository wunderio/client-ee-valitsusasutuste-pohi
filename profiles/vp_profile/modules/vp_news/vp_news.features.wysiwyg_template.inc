<?php
/**
 * @file
 * vp_news.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function vp_news_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['newsletter'] = array(
    'title' => 'Newsletter',
    'description' => '',
    'weight' => 0,
    'fid' => 0,
    'body' => '<table border="0" cellpadding="0" cellspacing="0" class="static-image-aside-text" style="border-width: 0 0 1px 0 !important; border-style: solid !important; border-color: #ccc !important" width="100%">
	<tbody>
		<tr>
			<td colspan="2" style="padding: 0!important; border:0!important;">
				<div style="font-size: 18px; color: rgb(0, 102, 140); line-height: 30px; font-weight: normal;">Topic</div>
			</td>
		</tr>
		<tr>
			<td class="left" style="border:0!important; font-size: 14px;">
				<div><a href="#">Newsitem title 1</a></div>
			</td>
			<td class="right" style="width: 120px; padding:0 0 0 20px !important; border:0 !important; vertical-align: middle;" width="120">
				<div style="padding-bottom: 10px !important"><img src="/profiles/vp_profile/themes/vp_theme/img/10-global/newsletter-placeholder.gif"></div>
			</td>
		</tr>
	</tbody>
</table>
<p>&nbsp;</p>
',
    'name' => 'newsletter',
    'content_types' => array(),
  );
  return $templates;
}
