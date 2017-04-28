<?php
/**
 * @file
 * vp_wysiwyg.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function vp_wysiwyg_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['2_veergu_1_3_2_3_vahejoon'] = array(
    'title' => '2: Kaks veergu 33/66 joonega',
    'description' => '',
    'weight' => 2,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/2.png',
    'fid' => 0,
    'body' => '<div class="static layout-4">
	<div class="inner clearfix">
		<div class="aside">
			<p>Valitsusliidu majanduspoliitika eesmärk on Eesti inimeste elatustaseme tõus. Selle eeldus on stabiilne majanduskasv ja konkurentsivõimeline majandusstruktuur – just neist sõltuvad uued töökohad, pensionitõus, teenused lastega peredele, turvalisus ja heal tasemel haridus.</p>
		</div>

		<div class="main">
			<p>Eesti majanduskasvu võtmeks on edenemine ülemaailmses väärtusahelas – Eestis tehtu ja loodu peab muutuma oluliselt väärtuslikumaks ja konkurentsivõimelisemaks.</p>
		</div>
	</div>
</div>
',
    'name' => '2_veergu_1_3_2_3_vahejoon',
    'content_types' => array(),
  );
  $templates['2_veergu_25_75'] = array(
    'title' => '2b: Kaks veergu 33/66',
    'description' => '',
    'weight' => 4,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/2b.png',
    'fid' => 0,
    'body' => '<div class="static static-25-75-2columns clearfix">
	<div class="col first">
		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>
	</div>

	<div class="col last">
		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>

		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>
	</div>
</div>
',
    'name' => '2_veergu_25_75',
    'content_types' => array(),
  );
  $templates['2_veergu_50_50'] = array(
    'title' => '1a: Kaks veergu 50/50',
    'description' => '',
    'weight' => 1,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/1a.png',
    'fid' => 0,
    'body' => '<div class="static static-simple-2columns clearfix">
	<div class="col first">
		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>
	</div>

	<div class="col last">
		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>

		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>
	</div>
</div>
',
    'name' => '2_veergu_50_50',
    'content_types' => array(),
  );
  $templates['2_veergu_50_50_vahejoon'] = array(
    'title' => '1: Kaks veergu 50/50 joonega',
    'description' => '',
    'weight' => 0,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/1.png',
    'fid' => 0,
    'body' => '<div class="static static-simple-2columns has-spacer clearfix">
	<div class="col first">
		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>
	</div>

	<div class="col last">
		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>

		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>
	</div>
</div>
',
    'name' => '2_veergu_50_50_vahejoon',
    'content_types' => array(),
  );
  $templates['2_veergu_75_25'] = array(
    'title' => '3: Kaks veergu 75/25',
    'description' => '',
    'weight' => 5,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/3.png',
    'fid' => 0,
    'body' => '<div class="static static-75-25-2columns clearfix">
	<div class="col first">
		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>

		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>
	</div>

	<div class="col last">
		<p>Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum Lorem ipsum</p>
	</div>
</div>
',
    'name' => '2_veergu_75_25',
    'content_types' => array(),
  );
  $templates['_read_more_block'] = array(
    'title' => '11: Lingikogu',
    'description' => '',
    'weight' => 17,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/11.png',
    'fid' => 0,
    'body' => '<div class="static static-read-more">
	<div class="container-12">
		<div class="grid-12">
			<h2>Loe ja vaata lisaks</h2>
		</div>
	</div>

	<div class="container-12">
		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Artiklid, Uuringud,<br>
					Alusdokumendid</span></h3>

				<ul>
					<li><a href="#">Alusharidusest lähemalt</a></li>
					<li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a href="#">Alusharidusest lähemalt</a></li>
					<li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a href="#">Alusharidusest lähemalt</a></li>
					<li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a href="#">Alusharidusest lähemalt</a></li>
					<li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
				</ul>
			</div>
		</div>

		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>

				<ul>
					<li><a href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a href="#">Sotsiaalministeerium</a></li>
				</ul>

				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eelnõud</span></h3>

				<ul>
					<li><a href="#">Alusharidusest lähemalt</a></li>
					<li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a href="#">Alusharidusest lähemalt</a></li>
					<li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
				</ul>
			</div>
		</div>

		<div class="grid-4">
			<div class="grid-inner">
				<h3><span class="icon icon-info-external">&nbsp;</span><span class="text">Vastutavad<br>
					Ministeeriumid</span></h3>

				<ul>
					<li><a href="#">Haridus- ja Teadusministeerium</a></li>
					<li><a href="#">Sotsiaalministeerium</a></li>
				</ul>

				<h3><span class="icon icon-download">&nbsp;</span><span class="text">Seadused &amp;<br>
					Eelnõud</span></h3>

				<ul>
					<li><a href="#">Alusharidusest lähemalt</a></li>
					<li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
					<li><a href="#">Alusharidusest lähemalt</a></li>
					<li><a href="#">Lapsehoiuteenusest lähemalt</a></li>
				</ul>
			</div>
		</div>
	</div>
</div>
',
    'name' => '_read_more_block',
    'content_types' => array(),
  );
  $templates['contact_header'] = array(
    'title' => 'Kontakti malli päis',
    'description' => '',
    'weight' => 23,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/kontakti_malli_pais.png',
    'fid' => 0,
    'body' => '<div class="static static-contact-header">
	<h2>Riigikantselei</h2>

	<div class="location-wrap">
		<div class="textbox">
			<p>Stenbocki maja,<br>
				Rahukohtu 3,<br>
				15161 Tallinn</p>

			<ul>
				<li><span class="label">Telefon:</span><span class="value">(+372) 693 5555</span></li>
				<li><span class="label">Faks:</span><span class="value">(+372) 693 5554</span></li>
				<li><span class="label">E-post:</span><span class="value"><a href="mailto:riigikantselei@riigikantselei.ee">riigikantselei@riigikantselei.ee</a></span></li>
			</ul>
		</div>

		<div class="mapbox"><a class="colorbox" href="/profiles/vp_profile/themes/vp_theme/img/example-content/static-contact-header-map-full.jpg"><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/static-contact-header-map-thumbnail.png"></a>

			<div class="hint">Kliki kaardil, et näha suuremalt</div>
		</div>

		<div class="imagebox"><a class="colorbox" href="/profiles/vp_profile/themes/vp_theme/img/example-content/static-contact-header-stenbock-full.jpg"><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/static-contact-header-stenbock-thumbnail.png"></a>

			<div class="hint">Kliki pildil, et näha suuremalt</div>
		</div>
	</div>

	<div class="contacts-wrap">
		<div class="styled-textbox">
			<p><em>Riigikantselei on avatud<br>
				E-R kell 8.30-17.00</em><br>
				Vastuvõtule registreerimine<br>
				üldtelefonil (+372) 693 5555 või<br>
				<a href="mailto:riigikantselei@riigikantselei.ee">riigikantselei@riigikantselei.ee</a></p>
		</div>

		<div class="contacts">
			<div class="contact"><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/static-contact-contact-marge.png">
				<h3>Marge Varma</h3>

				<p class="group">Valitsuse infonõunik<br>
					Valitsuse kommunikatsioonibüro</p>

				<ul>
					<li><span class="label">Tel.:</span><span class="value">(+372) 693 5725</span></li>
					<li><span class="label">E-post:</span><span class="value">marge.varma@riigikantselei.ee</span></li>
				</ul>
			</div>

			<div class="contact"><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/static-contact-contact-anna-liisa.png">
				<h3>Marge Varma</h3>

				<p class="group">Valitsuse infonõunik<br>
					Valitsuse kommunikatsioonibüro</p>

				<ul>
					<li><span class="label">Tel.:</span><span class="value">(+372) 693 5725</span></li>
					<li><span class="label">E-post:</span><span class="value">marge.varma@riigikantselei.ee</span></li>
				</ul>
			</div>
		</div>
	</div>
</div>
',
    'name' => 'contact_header',
    'content_types' => array(),
  );
  $templates['footer'] = array(
    'title' => 'Jalus',
    'description' => '',
    'weight' => 28,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/jalus.png',
    'fid' => 0,
    'body' => '<div class="static static-footer">
	<ul>
		<li>(cc) Riigikantselei</li>
		<li>
			<ul>
				<li><a href="">Intranet</a></li>
				<li><a href="">Sisukaart</a></li>
			</ul>
		</li>
		<li><a class="rss" href="#">RSS Uudisvood</a></li>
		<li><a class="twitter" href="#">Twitter</a></li>
		<li><a class="fb" href="#">Facebook</a></li>
		<li><a class="video" href="#">Videod</a></li>
		<li><a class="newsletter" href="#">Telli uudiskiri</a></li>
	</ul>
</div>
',
    'name' => 'footer',
    'content_types' => array(),
  );
  $templates['hall_taust'] = array(
    'title' => '7: Hall selgituse plokk',
    'description' => '',
    'weight' => 9,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/7.png',
    'fid' => 0,
    'body' => '<div class="static static-textblock-gray-background">
	<h2>Selgituseks</h2>

	<p>Paar rida selgitavat teksti, et misasi on “selgituseks” plokk. Paar rida selgitavat teksti, et misasi on “selgituseks” plokk.Paar rida selgitavat teksti, et misasi on “selgituseks” plokk.Paar rida selgitavat teksti, et misasi on “selgituseks” plokk.Paar rida selgitavat teksti, et misasi on “selgituseks” plokk.</p>

	<div class="container-12">
		<div class="textbox grid-12">
			<div class="textbox-inner">
				<h3>Mis on OECD?</h3>

				<p><strong>OECD ehk Majandusliku Koostöö ja Arengu Organisatsioon (inglise keeles Organisation for Economic Co-operation and Development) on tööstuslikult arenenud demokraatlike riikide foorum alalise asukohaga Pariisis. OECDsse kuulub hetkel 34 riiki.</strong></p>

				<p>Organisatsiooni eesmärk on aidata kaasa maailmamajanduse arengule, samuti ka liikmes- ja mitteliikmesriikide majandusarengule ning maailmakaubanduse laienemisele. OECD peamised tegevusvaldkonnad on liikmesriikide majandusnäitajate kogumine ja analüüsimine ning soovituste andmine, et riigid saaksid oma majanduspoliitikat tulemuslikumalt kujundada. Samuti tegeleb OECD sotsiaalsete ja keskkonnakaitse probleemide analüüsimise ning nende ennetamisega. Mitte ajada segi OSCEga, mis on Euroopa Julgeoleku- ja Koostööorganisatsioon (inglise keeles Organization for Security and Co-operation in Europe)</p>

				<p style="text-align: right;"><a href="#">Eesti alaline esindus OECD juures</a></p>
			</div>
		</div>
	</div>
</div>
',
    'name' => 'hall_taust',
    'content_types' => array(),
  );
  $templates['hall_taust_3_veergu'] = array(
    'title' => '7a: Hall selgituse plokk - 3 veergu',
    'description' => '',
    'weight' => 10,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/7a.png',
    'fid' => 0,
    'body' => '<div class="static static-textblock-gray-background">
	<h2>Selgituseks</h2>

	<p>Paar rida selgitavat teksti, et misasi on “selgituseks” plokk. Paar rida selgitavat teksti, et misasi on “selgituseks” plokk.Paar rida selgitavat teksti, et misasi on “selgituseks” plokk.Paar rida selgitavat teksti, et misasi on “selgituseks” plokk.Paar rida selgitavat teksti, et misasi on “selgituseks” plokk.</p>

	<div class="container-12">
		<div class="textbox grid-4">
			<div class="textbox-inner">
				<h3>Mis on OECD?</h3>

				<p><strong>OECD ehk Majandusliku Koostöö ja Arengu Organisatsioon (inglise keeles Organisation for Economic Co-operation and Development) on tööstuslikult arenenud demokraatlike riikide foorum alalise asukohaga Pariisis. OECDsse kuulub hetkel 34 riiki.</strong></p>

				<p>Organisatsiooni eesmärk on aidata kaasa maailmamajanduse arengule, samuti ka liikmes- ja mitteliikmesriikide majandusarengule ning maailmakaubanduse laienemisele. OECD peamised tegevusvaldkonnad on liikmesriikide majandusnäitajate kogumine ja analüüsimine ning soovituste andmine, et riigid saaksid oma majanduspoliitikat tulemuslikumalt kujundada. Samuti tegeleb OECD sotsiaalsete ja keskkonnakaitse probleemide analüüsimise ning nende ennetamisega. Mitte ajada segi OSCEga, mis on Euroopa Julgeoleku- ja Koostööorganisatsioon (inglise keeles Organization for Security and Co-operation in Europe)</p>
			</div>
		</div>

		<div class="textbox grid-4">
			<div class="textbox-inner">
				<h3>Mis on OECD?</h3>

				<p><strong>OECD ehk Majandusliku Koostöö ja Arengu Organisatsioon (inglise keeles Organisation for Economic Co-operation and Development) on tööstuslikult arenenud demokraatlike riikide foorum alalise asukohaga Pariisis. OECDsse kuulub hetkel 34 riiki.</strong></p>

				<p>Organisatsiooni eesmärk on aidata kaasa maailmamajanduse arengule, samuti ka liikmes- ja mitteliikmesriikide majandusarengule ning maailmakaubanduse laienemisele. OECD peamised tegevusvaldkonnad on liikmesriikide majandusnäitajate kogumine ja analüüsimine ning soovituste andmine, et riigid saaksid oma majanduspoliitikat tulemuslikumalt kujundada. Samuti tegeleb OECD sotsiaalsete ja keskkonnakaitse probleemide analüüsimise ning nende ennetamisega.</p>
			</div>
		</div>

		<div class="textbox grid-4">
			<div class="textbox-inner">
				<h3>Mis on OECD?</h3>

				<p><strong>OECD ehk Majandusliku Koostöö ja Arengu Organisatsioon (inglise keeles Organisation for Economic Co-operation and Development) on tööstuslikult arenenud demokraatlike riikide foorum alalise asukohaga Pariisis. OECDsse kuulub hetkel 34 riiki.</strong></p>

				<p>Organisatsiooni eesmärk on aidata kaasa maailmamajanduse arengule, samuti ka liikmes- ja mitteliikmesriikide majandusarengule ning maailmakaubanduse laienemisele. OECD peamised tegevusvaldkonnad on liikmesriikide majandusnäitajate kogumine ja analüüsimine ning soovituste andmine, et riigid saaksid oma majanduspoliitikat tulemuslikumalt kujundada. Samuti tegeleb OECD sotsiaalsete ja keskkonnakaitse probleemide analüüsimise ning nende ennetamisega.</p>
			</div>
		</div>
	</div>
</div>
',
    'name' => 'hall_taust_3_veergu',
    'content_types' => array(),
  );
  $templates['horizontal_spacer'] = array(
    'title' => '12a: Vahejoon elemendiga',
    'description' => '',
    'weight' => 18,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/12a.png',
    'fid' => 0,
    'body' => '<div class="hr">&nbsp;</div>',
    'name' => 'horizontal_spacer',
    'content_types' => array(),
  );
  $templates['important_topics_links'] = array(
    'title' => 'Avaleht: Important topics > Lingid',
    'description' => '',
    'weight' => 24,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/avaleht-important_topics__lingid.png',
    'fid' => 0,
    'body' => '<div class="static static-important-topics-links">
	<h2>Kiirelt kätte</h2>

	<ul>
		<li><a href="#">Valitsuse tegevusprogramm</a></li>
		<li><a href="#">Vabariigi Valitsuse seadus</a></li>
		<li><a href="#">Peaministrid ja ministrid</a></li>
	</ul>

	<div class="hr">&nbsp;</div>

	<ul>
		<li><a href="#">Valitsuse tegevusprogramm</a></li>
		<li><a href="#">Vabariigi Valitsuse seadus</a></li>
		<li><a href="#">Peaministrid ja ministrid</a></li>
	</ul>
</div>
',
    'name' => 'important_topics_links',
    'content_types' => array(),
  );
  $templates['infobox01'] = array(
    'title' => '8a: Lisainfo kast - ikoonid',
    'description' => '',
    'weight' => 11,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/8a.png',
    'fid' => 0,
    'body' => '<div class="static static-infobox01">
	<ul>
		<li class="graph"><a href="#">Lähemalt näitajatest »</a>

			<div>üks rida sissejuhatust üks rida</div>
		</li>
		<li class="case"><a href="#">Valitsuse tegevused »</a>
			<div>üks rida sissejuhatus üks rida</div>
		</li>
		<li class="list"><a href="#">Arengukavad »</a>
			<div>üks rida sissejuhatust üks rida</div>
		</li>
	</ul>
</div>
',
    'name' => 'infobox01',
    'content_types' => array(),
  );
  $templates['infobox02'] = array(
    'title' => '8b: Lisainfo kast - lingid',
    'description' => '',
    'weight' => 12,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/8b.png',
    'fid' => 0,
    'body' => '<div class="static static-infobox02">
	<h2>Lisainfo</h2>

	<ul>
		<li><a href="#">Teadus- ja arengustegevuse korralduse seoadus</a></li>
		<li><a href="#">Teadus- ja Arendusnõukogu põhimäärus</a></li>
		<li><a href="#">Nõukogu liikmetele: Teadus- ja Arendusnõukogu infosüsteem »</a></li>
	</ul>
</div>
',
    'name' => 'infobox02',
    'content_types' => array(),
  );
  $templates['infobox03'] = array(
    'title' => '8c: Lisainfo kast - failid',
    'description' => '',
    'weight' => 13,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/8c.png',
    'fid' => 0,
    'body' => '<div class="static static-infobox03">
	<ul>
		<li class="download"><a href="#">TA&amp;I arengukava koostamise ettepanek aastateks 2014-2020 (pdf, 224 KiB) »</a></li>
		<li class="download"><a href="#">Teadus- ja Arendusnõukogu raport “Tark, töötav ja tõhus Eesti. Poliitikasoovitused erasektori arendustegevuse ja innovatsioonivõime suurendamiseks. Tallinn 2010” (pdf, 156 KiB) »</a></li>
		<li class="person"><a href="#">Peaministri ettekanded sellel ja sellel teemal, et tuleks 2 rida täis »</a></li>
	</ul>
</div>
',
    'name' => 'infobox03',
    'content_types' => array(),
  );
  $templates['join_in'] = array(
    'title' => 'Avaleht: Kaasamise plokk',
    'description' => '',
    'weight' => 25,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/avaleht-kaasamise_plokk.png',
    'fid' => 0,
    'body' => '<div class="static static-join-in">
	<div class="static-inner">
		<h2 class="title1">Räägi kaasa Haridus-<br>
			valdkonna arendamises</h2>

		<div class="title2">
			<p>Sinu arvamus on meile väga oluline!<br>
				Kasuta ära oma võimalusi rääkida kaasa riigi asjades!</p>
		</div>

		<div class="box-1-2-wrap">
			<div class="box box-1">
				<h2 class="blue">Eelnõude infosüsteem</h2>

				<p>Sul on võimalik jälgida, millised eelnõud on praegu töös ning soovi korral saad ka oma kommentaari esitada või osaleda avalikel konsultatsioonidel.</p>
			</div>

			<div class="box box-2">
				<h2 class="green">Osalusveeb</h2>

				<div class="spacer">&nbsp;</div>

				<p>Osalusveebis osale.ee saad esitada valitsusele ideid ja ettepanekuid ning koguda allkirju oma idee toetuseks. Iga esitatud idee saab ka valitsuse poolse vastuse.</p>
			</div>
		</div>

		<div class="box box-3">
			<h2>Püsi kursis</h2>

			<ul class="social-links">
				<li><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/40-desktop/static-join-in-icon-fb.png"><a href="#">Jälgi valitsust Facebookis, jagame operatiivset infot</a></li>
				<li><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/40-desktop/static-join-in-icon-tw.png"><a href="#">Jälgi valitsust Twitteris, jagame operatiivset infot</a></li>
				<li><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/40-desktop/static-join-in-icon-yt.png"><a href="#">Värskeimad videod meie YouTube kanalis</a></li>
				<li><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/40-desktop/static-join-in-icon-fl.png"><a href="#">Uusimad fotod Flickr\'ist</a></li>
			</ul>
		</div>
	</div>
</div>
',
    'name' => 'join_in',
    'content_types' => array(),
  );
  $templates['kontakt'] = array(
    'title' => '9: Kontakt',
    'description' => '',
    'weight' => 14,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/9.png',
    'fid' => 0,
    'body' => '<div class="static static-person-contact">
	<div class="aside"><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/liinakersna.jpg"></div>

	<div class="main">
		<h2>Liina Kersna</h2>

		<h4>Peaministri nõunik - peaministri büroo juhataja</h4>

		<p>Liina Kersna korraldab ja juhib peaministri büroo tööd: püstitab eesmärke, annab büroo ametnikele juhiseid ning täidab ja vahendab peaministrilt saadud ülesandeid. Samuti nõustab ta peaministrit poliitilistes küsimustes ja korraldab peaministri poolt läbiviidavaid kohtumisi ja nõupidamisi.</p>

		<h3><span class="icon icon-info-telephone">&nbsp;</span><span class="text">Telefon: 693 5705<br>
			<a href="mailto:liina.kersna@riigikantselei.ee">liina.kersna@riigikantselei.ee</a> </span></h3>
	</div>

	<div class="hr">&nbsp;</div>
</div>
',
    'name' => 'kontakt',
    'content_types' => array(),
  );
  $templates['list_vahejoonega'] = array(
    'title' => '10a: Tekstiplokid pealkirjadega',
    'description' => '',
    'weight' => 15,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/10a.png',
    'fid' => 0,
    'body' => '<ul class="static-list-1column-dotted-border">
	<li>
		<h3>Edenemine ülemaailmses väärtusahelas</h3>

		<p>Eesti majanduskasvu võtmeks on edenemine ülemaailmses väärtusahelas – Eestis tehtu ja loodu peab muutuma oluliselt väärtuslikumaks ja konkurentsivõimelisemaks. Töö tootlikkus ja hind peab kasvama – vaid sellisel juhul saavad kasvada ettevõtlustulu ja palgad. Prioriteetseks on just inimeste sissetulekute kasv, mis pikemas perspektiivis tagab ka avalike teenuste osutamiseks vajalike vahendite piisavuse.</p>
	</li>
	<li>
		<h3>Atraktiivne ja usaldusväärne keskkond</h3>

		<p>Riik panustab majanduskasvu atraktiivse ja usaldusväärse keskkonna loomisega: hariduse, teaduse ja kultuuri arendamisega, tööturupoliitika, taristu-, IT-, energia- ja transpordipoliitika, õiguspoliitika ja majandusdiplomaatiaga. Kõiki riigi ja kohalike omavalitsuste poolt ettevõetavaid samme, mis mõjutavad majanduskeskkonda, tuleb hinnata nende mõju alusel Eesti rahvusvahelisele konkurentsivõimele.</p>
	</li>
	<li>
		<h3>Elujõuline riigieelarve</h3>

		<p>Riigi suur vastutus, mis võimaldab seda keskkonda rahastada, on elujõuline riigieelarve, stabiilne maksusüsteem, võimalikult madal ning majanduslikult mõistlikult jaotuv maksukoormus. Tuleb luua olukord, kus halbadele aegadele majanduses ei pea reageerima ühegi maksu tõstmisega. Maksukoormuse alandamine ning teised konkurentsivõimet tõstvad meetmed peavad sõltuma eelarve struktuurse ülejäägi suurusest.</p>
	</li>
</ul>
',
    'name' => 'list_vahejoonega',
    'content_types' => array(),
  );
  $templates['list_vahejoonega_2_veergu'] = array(
    'title' => '10b: Tekstiplokid pealkirjadeta',
    'description' => '',
    'weight' => 16,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/10b.png',
    'fid' => 0,
    'body' => '<div class="static-list-2column-dotted-border clearfix">
	<ul class="first">
		<li>
			<p>Kaitseminister <em>vastutab riigikaitse korraldamise eest Eesti Vabariigis.</em></p>
		</li>
		<li>
			<p>Kaitseminister <em>juhib kaitseministeeriumi tööd ja otsustab selle valitsemisalasse kuuluvaid küsimusi.</em> Lisaks annab minister Vabariigi Valitsusele aru kaitseministeeriumi tegevusest ja esitab ettepanekuid ministeeriumi valitsemisala puudutavate küsimuste otsustamiseks.</p>
		</li>
		<li>
			<p>Kaitseminister nimetab ametisse väeliikide ülemad ning <em>teeb valitsusele ettepaneku Kaitseväe juhataja ja Kaitseväe peastaabi ülema ametisse nimetamiseks</em> ja ametist vabastamiseks.</p>
		</li>
	</ul>

	<ul class="last">
		<li>
			<p>Kaitseminister <em>kinnitab ametisse ministeeriumi valitsemisalas olevate valitsusasutuste juhid</em> ning ministeeriumi asekantslerid ja osakondade juhatajad.</p>
		</li>
		<li>
			<p>Kaitseminister <em>esitab valitsusele ettepanekuid ministeeriumi eelarve ning vajadusel lisaeelarve kohta.</em> Ühtlasi otsustab ta eelarvevahendite kasutamise ning jälgib eelarve täitmist. Minister kinnitab riigieelarvest lähtudes ka ministeeriumi valitsemisalas olevate riigiasutuste eelarved.</p>
		</li>
		<li>
			<p>Kaitseminister <em>otsustab ministeeriumi hallatavate riigiasutuste moodustamise</em> ja kinnitab nende põhimäärused, struktuuri ja töökorralduse.</p>
		</li>
	</ul>
</div>
',
    'name' => 'list_vahejoonega_2_veergu',
    'content_types' => array(),
  );
  $templates['menu_2_type_1'] = array(
    'title' => 'Menüü - 4 veergu',
    'description' => '4 columns: 1 description with image column, 3 link columns',
    'weight' => 22,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/menuu-4_veergu.png',
    'fid' => 0,
    'body' => '<div class="static static-mainmenu-popup">
	<div class="mainmenu-popup-content">
		<div class="container-12 has-big-column-separators">
			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Valitsuse Töö</h2>

					<div class="widget-text">
						<p>Valitsus 2015. aastaks seitse prioriteeti, 55 valdkondlikku eesmärki 18 poliitikavaldkonnas.</p>
						<img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/mainmenu-popup-graph.png"></div>
				</div>
			</div>

			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Eesmärgid</h2>

					<ul class="widget-menu">
						<li><a href="/test/test-sisu">Eesti iive on positiivne</a></li>
						<li><a href="/test/test-sisu">Eelarve on ülejäägis</a></li>
						<li><a href="/test/test-sisu">Tööhõive on 72%</a></li>
						<li><a href="/test/test-sisu">Noorte koolist väljalangemine on vähenenud</a></li>
						<li><a href="/test/test-sisu">Inimesed elavad kauem</a></li>
						<li><a href="/test/test-sisu">Ettevõtete tootlikkus on kasvanud</a></li>
						<li><a href="/test/test-sisu">Kasvuhoonegaaside heitkogus on märkimisväärselt vähenenud</a></li>
						<li class="vertical-push"><a href="/test/test-sisu">Kõik valitsuse eesmärgid »</a></li>
					</ul>
				</div>
			</div>

			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Valdkonannad</h2>

					<ul class="widget-menu">
						<li><a href="/test/test-sisu">Majandus ja ettevõtlus, energeetika, transport</a></li>
						<li><a href="/test/test-sisu">Pere, töö, sotsiaalkaitse, tervis</a></li>
						<li><a href="/test/test-sisu">Haridus, teadus, infoühiskond</a></li>
						<li><a href="/test/test-sisu">Kultuur, sport, eesti keel, lõimumine</a></li>
						<li><a href="/test/test-sisu">Keskkond, maaelu, põllumajandus</a></li>
						<li><a href="/test/test-sisu">Turvalisus, riigikaitse ja julgeolekupoliitika</a></li>
						<li><a href="/test/test-sisu">Kodanike riik, valitsemine, koostöö teiste riikidega</a></li>
					</ul>
				</div>
			</div>

			<div class="column grid-3">
				<div class="grid-inner">
					<h2>Tegevusprogramm</h2>

					<ul class="widget-menu">
						<li><a href="/test/test-sisu">Valitsuse tegevusprogramm</a></li>
						<li><a href="/test/test-sisu">Koalitsioonileping</a></li>
						<li><a href="/test/test-sisu">Valitsusliidu tegevusprogramm (PDF)</a></li>
						<li><a href="/test/test-sisu">Tegevusprogrammi täitmine</a></li>
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>

<p>&nbsp;</p>
',
    'name' => 'menu_2_type_1',
    'content_types' => array(),
  );
  $templates['static_frontpage_block_minister'] = array(
    'title' => 'Avaleht: Sisu > Plokk pildiga',
    'description' => '',
    'weight' => 27,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/avaleht-sisu__plokk_pildiga.png',
    'fid' => 0,
    'body' => '<div class="static static-fp-block-minister">
	<div class="image"><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/10-global/static-fp-block-minister-ansip.jpg"></div>

	<h2><a href="#">Peaminister Andrus Ansip: koostöö Kasahstaniga on ajaga arenenud transiidist kaugemale</a></h2>

	<p>Peaminister Andrus Ansip kohtus ametlikul töövisiidil Kasahstanis presidendi Nursultan Nazarbajevi ja peaministri Karim Massimoviga, arutades mılemaga riikidevahelist kahepoolset koostööd.</p>

	<div class="tabs">
		<ul class="tabs-inner">
			<li><a href="#">peaminister</a></li>
			<li><a href="#">eelinfo</a></li>
		</ul>
	</div>
</div>
',
    'name' => 'static_frontpage_block_minister',
    'content_types' => array(),
  );
  $templates['static_frontpage_tab_block'] = array(
    'title' => 'Avaleht: Sisu > Plokk tabidega',
    'description' => '',
    'weight' => 26,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/avaleht-sisu__plokk_tabidega.png',
    'fid' => 0,
    'body' => '<div class="static static-fp-tab-block">
	<div class="static-fp-tab-contents">
		<div class="tab-content">
			<h2>Allasutused</h2>

			<p>Kiire majandusv on kaaas toonud tööjõunõudluse märgatava suurenemise.</p>

			<ul>
				<li><a href="#">Riiklik statistika</a></li>
				<li><a href="#">Rahvusvahelised finantsinstitutsioonid</a></li>
				<li><a href="#">Tugiteenuste projekt</a></li>
				<li><a href="#">Riiklik statistika</a></li>
				<li><a href="#">Rahvusvahelised finantsinstitutsioonid</a></li>
			</ul>
		</div>

		<div class="tab-content">
			<h2>Registrid</h2>

			<ul>
				<li><a href="#">Lorem ipsum</a></li>
			</ul>
		</div>

		<div class="tab-content">
			<h2>Lorem</h2>

			<ul>
				<li><a href="#">Ipsum lorem</a></li>
			</ul>
		</div>
	</div>
</div>
',
    'name' => 'static_frontpage_tab_block',
    'content_types' => array(),
  );
  $templates['static_module_2'] = array(
    'title' => '4: Kaks veergu vs',
    'description' => '',
    'weight' => 6,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/4.png',
    'fid' => 0,
    'body' => '<div class="static static-module-2">
	<div class="static-inner">
		<div class="left-col">
			<h2>Elektriturg praegu</h2>

			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast – suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See tähendab, et Eesti vabatarbijatel on õigus ja kohustus valida endale elektrienergia müüja. Vabatarbijad on ettevõtted, mis tarbivad ühes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>

			<p>Kõik kodutarbijad ning enamik Eesti firmasid ostab hetkel elektrit selle võrguettevõtja käest, kelle võrguga tarbija ühendatud on (näiteks Eesti Energia Jaotusvõrk või Imatra Elekter). Elektri müügihind suletud turuosa tarbijatele ning kõik muud elektriarvel olevad komponendid on riiklikult reguleeritud ega sõltu otseselt elektribörsil kujunevast hinnast.</p>
		</div>

		<div class="right-col">
			<h2>Elektriturg 2013. aastast</h2>

			<p class="lead">Eesti elektriturg koosneb 2013. aasta 1. jaanuarini kahest osast – suletud ja avatud elektriturg. Praegu on Eesti elektriturg 35% ulatuses avatud. See tähendab, et Eesti vabatarbijatel on õigus ja kohustus valida endale elektrienergia müüja. Vabatarbijad on ettevõtted, mis tarbivad ühes tarbimiskohas enam kui 2 GWh elektrienergiat aastas.</p>
		</div>
	</div>
</div>
',
    'name' => 'static_module_2',
    'content_types' => array(),
  );
  $templates['static_module_3_1'] = array(
    'title' => '2a: Kaks veergu 33/66 joonega bulletid',
    'description' => '',
    'weight' => 3,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/2a.png',
    'fid' => 0,
    'body' => '<div class="static static-module-3-1" style="background-image: url(/profiles/vp_profile/themes/vp_theme/img/static-module-3-1-bg.jpg)">
	<div class="aside">
		<h2>Eesmärgid</h2>

		<p>Valitsusliidu eesmärk on viia Eesti hariduse Põhjamaade tipptasemele – meie eesmärk on haritud rahvas ja edukas Eesti. Hea haridus tähendab inimese jaoks suuremat palka, paremat kaitset töötuse vastu ja suuremat pensioni tulevikus.</p>
	</div>

	<div class="main">
		<ul>
			<li class="has-bullet">Haridustee katkestajate osakaalu vähenemine 11%ni vanusegrupis 18–24 (põhihariduse või madalama haridustasemega õpinguid mittejätkavad noored)</li>
			<li class="has-bullet">Noorte õpetajate (kuni 30-aaastaste) osakaalu kasv üldhariduskoolides 12,5%ni.</li>
			<li class="has-bullet">Kolmanda taseme haridusega 30–34-aastaste inimeste osakaalu kasv 40%ni.</li>
			<li>Täiskasvanute (25–64-aastaste) elukestvas õppes osalemise määra suurenemine.</li>
			<li>Teadus- ja arendustegevuse kogukulutuste kasv 2%ni SKPst.</li>
		</ul>
	</div>
</div>
',
    'name' => 'static_module_3_1',
    'content_types' => array(),
  );
  $templates['static_module_3_2'] = array(
    'title' => '5: Kolm veergu taustaga',
    'description' => '',
    'weight' => 7,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/5.png',
    'fid' => 0,
    'body' => '<div class="static-module-3-2 clearfix">
	<h2>Küsimused ja Vastused</h2>

	<div class="col col-1">
		<h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3>

		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>

	<div class="col col-2">
		<h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3>

		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>

		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>

	<div class="col col-3 last">
		<h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3>

		<p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p>
	</div>
</div>
',
    'name' => 'static_module_3_2',
    'content_types' => array(),
  );
  $templates['static_module_5'] = array(
    'title' => '6: Horisontaalsed tabid',
    'description' => '',
    'weight' => 8,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/6.png',
    'fid' => 0,
    'body' => '<div id="static-module-5">
	<div class="main">
		<div class="main-inner">
			<h2>Valitsuse tegevus</h2>

			<h3>Igale lapsele lastehoiuteenuse ja kvaliteetse alushariduse omandamise võimalus</h3>

			<div class="row">Seame eesmärgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides vähemalt 95% lastest. Jätkame lasteaiakohtade loomist ja lastehoiuvõimaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide müügist laekuvate vahendite toel.</div>

			<div class="row">Vähendades erinevusi kooliminejate ettevalmistuses väldime hilisemat haridustee katkemist.</div>

			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>

			<div class="row">Lapsekeskse lastehoiuteenuse rakendamiseks seame pikaajaliseks sihiks õpetajate (sh eripedagoogide) arvu suurendamise lasteaialapse kohta.</div>

			<h3>Kaasaegsem ja kvaliteetsem üldharidus</h3>

			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>

			<h3>Õpetajakutse väärtustamine, et õpetajateks saaksid parimad</h3>

			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>

			<h3>Mõistliku koolivõrgu kujundamine</h3>

			<div class="row">Alus- ja põhihariduses peab keskenduma õppimisoskuse, iseseisva mõtlemise, loovuse ja õpijulguse kujundamisele. Õppe ja kasvatusalal on oluline väärtustel põhinev tegevus.</div>

			<h3>Vähemusrahvustest õpilaste edukas lõimimine kvaliteetset haridust andvasse haridus- süsteemi, eesti keele õpe kõigile</h3>

			<div class="row">Seame eesmärgiks, et alushariduse omandaks koolieelsetes lasteasutustes ja koolide ettevalmistusklassides vähemalt 95% lastest. Jätkame lasteaiakohtade loomist ja lastehoiuvõimaluste parandamist Euroopa Liidu struktuurifondide KOIT kava ning Kyoto saastekvootide müügist laekuvate vahendite toel.</div>
		</div>
	</div>
</div>

<p>&nbsp;</p>
',
    'name' => 'static_module_5',
    'content_types' => array(),
  );
  $templates['vahejoon'] = array(
    'title' => '12b: Vahejoon',
    'description' => '',
    'weight' => 19,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/12b.png',
    'fid' => 0,
    'body' => '<div class="hr clean">&nbsp;</div>',
    'name' => 'vahejoon',
    'content_types' => array(),
  );
  $templates['vap_mall_28_pildiga'] = array(
    'title' => '28: Tekstikast 66/33 pildiga ',
    'description' => '',
    'weight' => 20,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/28.png',
    'fid' => 0,
    'body' => '<div class="static-template-28">
	<h2 class="static-template-28__title">Dolorum dicta sit pariatur</h2>

	<div class="static-template-28__column--image"><img alt="" src="/profiles/vp_profile/themes/vp_theme/img/example-content/template-28.png"></div>

	<div class="static-template-28__column static-template-28__column--main">
		<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Qui dicta minus molestiae vel beatae natus eveniet ratione temporibus aperiam harum alias officiis assumenda officia quibusdam deleniti eos cupiditate dolore doloribus!</p>

		<p>Cupiditate:</p>

		<ul>
			<li>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Nam vero.</li>
			<li>Laboriosam quaerat sapiente minima nam minus similique illum architecto et!</li>
			<li>Incidunt vitae quae facere ducimus nostrum aliquid dolorum veritatis dicta!</li>
			<li>Tenetur laborum quod cum excepturi recusandae porro sint quas soluta!</li>
		</ul>

		<p><a href="#">Excepturi recusandae »</a></p>
	</div>

	<div class="static-template-28__column static-template-28__column--sidebar">
		<p>Kontakt:</p>

		<div class="static static-infobox01 static-infobox01_no-padding">
			<ul>
				<li class="telephone">
					<h4>Lorem Ipsum</h4>
					Telefon: +372 6103 591<br>
					<a href="mailto:lorem.ipsum@eesti.ee">lorem.ipsum@ecaa.ee</a></li>
			</ul>
		</div>

		<p><a href="#">Facere optio quod »</a><br>
			<a href="#">Consequatur »</a></p>
	</div>
</div>
',
    'name' => 'vap_mall_28_pildiga',
    'content_types' => array(),
  );
  $templates['vap_mall_28_pildita'] = array(
    'title' => '28a: Tekstikast 66/33',
    'description' => '',
    'weight' => 21,
    'template_image_path' => 'profiles/vp_profile/modules/vp_wysiwyg/template_images/28a.png',
    'fid' => 0,
    'body' => '<div class="static-template-28">
	<h2 class="static-template-28__title">Dolorum dicta sit pariatur</h2>

	<div class="static-template-28__column static-template-28__column--main">
		<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Qui dicta minus molestiae vel beatae natus eveniet ratione temporibus aperiam harum alias officiis assumenda officia quibusdam deleniti eos cupiditate dolore doloribus!</p>

		<p>Cupiditate:</p>

		<ul>
			<li>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Nam vero.</li>
			<li>Laboriosam quaerat sapiente minima nam minus similique illum architecto et!</li>
			<li>Incidunt vitae quae facere ducimus nostrum aliquid dolorum veritatis dicta!</li>
			<li>Tenetur laborum quod cum excepturi recusandae porro sint quas soluta!</li>
		</ul>

		<p><a href="#">Excepturi recusandae »</a></p>
	</div>

	<div class="static-template-28__column static-template-28__column--sidebar">
		<p>Kontakt:</p>

		<div class="static static-infobox01 static-infobox01_no-padding">
			<ul>
				<li class="telephone">
					<h4>Lorem Ipsum</h4>
					Telefon: +372 6103 591<br>
					<a href="mailto:lorem.ipsum@eesti.ee">lorem.ipsum@ecaa.ee</a></li>
			</ul>
		</div>

		<p><a href="#">Facere optio quod »</a><br>
			<a href="#">Consequatur »</a></p>
	</div>
</div>
',
    'name' => 'vap_mall_28_pildita',
    'content_types' => array(),
  );
  return $templates;
}
