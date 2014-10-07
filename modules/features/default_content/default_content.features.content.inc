<?php
/**
 * @file
 * default_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function default_content_content_defaults() {
  $content = array();

  $content['About'] = (object) array(
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/About',
      'router_path' => 'node/%',
      'link_title' => 'About',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 1,
      'customized' => 0,
      'identifier' => 'main-menu:node-name/About',
    ),
    'title' => 'This is my about page',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1411829272,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'About',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Donec et dolor enim? Cras mi orci, lobortis nec sapien suscipit; vestibulum laoreet nunc. Quisque in dictum justo, imperdiet suscipit nunc. Sed rutrum condimentum ipsum. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Suspendisse cursus dolor ac massa venenatis accumsan. Praesent rutrum quis urna eget interdum. Vivamus vitae purus erat. Cras facilisis leo vel leo facilisis, vitae rhoncus velit maximus.

Praesent ut tortor eu sapien mattis bibendum eget ac purus. Nulla a lectus varius ante ullamcorper tincidunt non ullamcorper augue. Donec pharetra vestibulum lectus. Curabitur id laoreet magna. Duis rhoncus arcu a sapien scelerisque, at hendrerit nisi lacinia. Pellentesque pulvinar mollis mollis. Phasellus hendrerit facilisis arcu at elementum. Aliquam auctor nulla et lacus interdum pretium.

Etiam consectetur dignissim consequat. Nam dapibus risus eu quam feugiat volutpat. Fusce egestas faucibus vehicula. Sed consectetur imperdiet egestas. Suspendisse tempor lorem nec ante dignissim, nec mattis mi sodales. Duis laoreet neque massa, vitae vulputate odio ultricies vitae. Pellentesque elementum placerat leo nec facilisis! Donec tempus, nisl posuere.
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Donec et dolor enim? Cras mi orci, lobortis nec sapien suscipit; vestibulum laoreet nunc. Quisque in dictum justo, imperdiet suscipit nunc. Sed rutrum condimentum ipsum. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Suspendisse cursus dolor ac massa venenatis accumsan. Praesent rutrum quis urna eget interdum. Vivamus vitae purus erat. Cras facilisis leo vel leo facilisis, vitae rhoncus velit maximus.</p>
<p>Praesent ut tortor eu sapien mattis bibendum eget ac purus. Nulla a lectus varius ante ullamcorper tincidunt non ullamcorper augue. Donec pharetra vestibulum lectus. Curabitur id laoreet magna. Duis rhoncus arcu a sapien scelerisque, at hendrerit nisi lacinia. Pellentesque pulvinar mollis mollis. Phasellus hendrerit facilisis arcu at elementum. Aliquam auctor nulla et lacus interdum pretium.</p>
<p>Etiam consectetur dignissim consequat. Nam dapibus risus eu quam feugiat volutpat. Fusce egestas faucibus vehicula. Sed consectetur imperdiet egestas. Suspendisse tempor lorem nec ante dignissim, nec mattis mi sodales. Duis laoreet neque massa, vitae vulputate odio ultricies vitae. Pellentesque elementum placerat leo nec facilisis! Donec tempus, nisl posuere.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['Contact'] = (object) array(
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/Contact',
      'router_path' => 'node/%',
      'link_title' => 'Contact',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 2,
      'customized' => 0,
      'identifier' => 'main-menu:node-name/Contact',
    ),
    'title' => 'Contact',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1411831134,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'Contact',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Cras consectetur velit augue, non interdum tortor ultricies quis. In efficitur lectus ac laoreet fringilla. Curabitur vitae metus efficitur, laoreet enim lobortis, sagittis metus. Donec turpis nisl, pellentesque condimentum neque et, aliquam tempor odio! Phasellus vehicula leo et sagittis malesuada. Cras faucibus eros eget felis tempus, vel faucibus velit aliquet. Fusce ac ligula pretium, euismod urna sit amet, congue nulla. Mauris sollicitudin convallis euismod. Etiam eu lorem vitae massa rhoncus scelerisque! Phasellus ac lectus fringilla, dapibus tortor id, porttitor est. Proin libero felis, efficitur at nulla nec, elementum interdum nulla.

Vestibulum nec purus commodo, laoreet eros a, volutpat ipsum. Praesent a tortor at nisl hendrerit dapibus. Nunc ultrices scelerisque sem ut suscipit? Nulla facilisi. Pellentesque tristique, eros quis maximus mattis, orci purus faucibus mi, sed sodales orci nunc id ex. Nullam dolor ipsum, scelerisque non erat ornare, vulputate pellentesque lectus! Fusce sollicitudin, ex nec ornare viverra, dolor mauris aliquam odio, a porta ante justo ut tellus. Duis euismod lorem eu velit iaculis, sit amet feugiat lectus molestie. Nunc non augue sagittis metus.
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Cras consectetur velit augue, non interdum tortor ultricies quis. In efficitur lectus ac laoreet fringilla. Curabitur vitae metus efficitur, laoreet enim lobortis, sagittis metus. Donec turpis nisl, pellentesque condimentum neque et, aliquam tempor odio! Phasellus vehicula leo et sagittis malesuada. Cras faucibus eros eget felis tempus, vel faucibus velit aliquet. Fusce ac ligula pretium, euismod urna sit amet, congue nulla. Mauris sollicitudin convallis euismod. Etiam eu lorem vitae massa rhoncus scelerisque! Phasellus ac lectus fringilla, dapibus tortor id, porttitor est. Proin libero felis, efficitur at nulla nec, elementum interdum nulla.</p>
<p>Vestibulum nec purus commodo, laoreet eros a, volutpat ipsum. Praesent a tortor at nisl hendrerit dapibus. Nunc ultrices scelerisque sem ut suscipit? Nulla facilisi. Pellentesque tristique, eros quis maximus mattis, orci purus faucibus mi, sed sodales orci nunc id ex. Nullam dolor ipsum, scelerisque non erat ornare, vulputate pellentesque lectus! Fusce sollicitudin, ex nec ornare viverra, dolor mauris aliquam odio, a porta ante justo ut tellus. Duis euismod lorem eu velit iaculis, sit amet feugiat lectus molestie. Nunc non augue sagittis metus.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['Home'] = (object) array(
    'exported_path' => 'front',
    'title' => 'Homepage',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1411834590,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'Home',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Vestibulum a varius purus. Nullam nec porta felis, id interdum nisi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Integer volutpat mattis lobortis. Nam non sapien varius; placerat risus sollicitudin, rhoncus ante. Donec sit amet mi et ligula pulvinar hendrerit. Curabitur neque sem, congue vel elementum et, blandit id eros. In sit amet molestie quam. Sed consequat, purus vel rhoncus lacinia, odio massa volutpat arcu, ac dictum mauris justo id dolor.

Vestibulum pretium sed dui sit amet laoreet. Quisque luctus pretium eros non efficitur. Morbi porttitor, magna a sagittis auctor, augue lacus consequat dui, at egestas felis mi id mauris. Sed sed nullam.
<div class="row">
      <div class="col-sm-6 col-md-4">
        <div class="thumbnail">
          <img alt="100%x200" data-src="holder.js/100%x200" style="height: 200px; width: 100%; display: block;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNDIiIGhlaWdodD0iMjAwIj48cmVjdCB3aWR0aD0iMjQyIiBoZWlnaHQ9IjIwMCIgZmlsbD0iI2VlZSIvPjx0ZXh0IHRleHQtYW5jaG9yPSJtaWRkbGUiIHg9IjEyMSIgeT0iMTAwIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjE1cHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+MjQyeDIwMDwvdGV4dD48L3N2Zz4=">
          <div class="caption">
            <h3>Thumbnail label</h3>
            <p>Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec id elit non mi porta gravida at eget metus. Nullam id dolor id nibh ultricies vehicula ut id elit.</p>
            <p><a role="button" class="btn btn-primary" href="#">Button</a> <a role="button" class="btn btn-default" href="#">Button</a></p>
          </div>
        </div>
      </div>
      <div class="col-sm-6 col-md-4">
        <div class="thumbnail">
          <img alt="100%x200" data-src="holder.js/100%x200" style="height: 200px; width: 100%; display: block;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNDIiIGhlaWdodD0iMjAwIj48cmVjdCB3aWR0aD0iMjQyIiBoZWlnaHQ9IjIwMCIgZmlsbD0iI2VlZSIvPjx0ZXh0IHRleHQtYW5jaG9yPSJtaWRkbGUiIHg9IjEyMSIgeT0iMTAwIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjE1cHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+MjQyeDIwMDwvdGV4dD48L3N2Zz4=">
          <div class="caption">
            <h3>This is a lable label</h3>
            <p>Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec id elit non mi porta gravida at eget metus. Nullam id dolor id nibh ultricies vehicula ut id elit.</p>
            <p><a role="button" class="btn btn-primary" href="#">Button</a> <a role="button" class="btn btn-default" href="#">Button</a></p>
          </div>
        </div>
      </div>
      <div class="col-sm-6 col-md-4">
        <div class="thumbnail">
          <img alt="100%x200" data-src="holder.js/100%x200" style="height: 200px; width: 100%; display: block;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNDIiIGhlaWdodD0iMjAwIj48cmVjdCB3aWR0aD0iMjQyIiBoZWlnaHQ9IjIwMCIgZmlsbD0iI2VlZSIvPjx0ZXh0IHRleHQtYW5jaG9yPSJtaWRkbGUiIHg9IjEyMSIgeT0iMTAwIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjE1cHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+MjQyeDIwMDwvdGV4dD48L3N2Zz4=">
          <div class="caption">
            <h3>Thumbnail label</h3>
            <p>Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec id elit non mi porta gravida at eget metus. Nullam id dolor id nibh ultricies vehicula ut id elit.</p>
            <p><a role="button" class="btn btn-primary" href="#">Button</a> <a role="button" class="btn btn-default" href="#">Button</a></p>
          </div>
        </div>
      </div>
    </div>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>Vestibulum a varius purus. Nullam nec porta felis, id interdum nisi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Integer volutpat mattis lobortis. Nam non sapien varius; placerat risus sollicitudin, rhoncus ante. Donec sit amet mi et ligula pulvinar hendrerit. Curabitur neque sem, congue vel elementum et, blandit id eros. In sit amet molestie quam. Sed consequat, purus vel rhoncus lacinia, odio massa volutpat arcu, ac dictum mauris justo id dolor.</p>
<p>Vestibulum pretium sed dui sit amet laoreet. Quisque luctus pretium eros non efficitur. Morbi porttitor, magna a sagittis auctor, augue lacus consequat dui, at egestas felis mi id mauris. Sed sed nullam.</p>
<div class="row">
<div class="col-sm-6 col-md-4">
<div class="thumbnail">
          <img alt="100%x200" data-src="holder.js/100%x200" style="height: 200px; width: 100%; display: block;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNDIiIGhlaWdodD0iMjAwIj48cmVjdCB3aWR0aD0iMjQyIiBoZWlnaHQ9IjIwMCIgZmlsbD0iI2VlZSIvPjx0ZXh0IHRleHQtYW5jaG9yPSJtaWRkbGUiIHg9IjEyMSIgeT0iMTAwIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjE1cHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+MjQyeDIwMDwvdGV4dD48L3N2Zz4=" /><div class="caption">
<h3>Thumbnail label</h3>
<p>Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec id elit non mi porta gravida at eget metus. Nullam id dolor id nibh ultricies vehicula ut id elit.</p>
<p><a role="button" class="btn btn-primary" href="#">Button</a> <a role="button" class="btn btn-default" href="#">Button</a></p>
</div>
</div>
</div>
<div class="col-sm-6 col-md-4">
<div class="thumbnail">
          <img alt="100%x200" data-src="holder.js/100%x200" style="height: 200px; width: 100%; display: block;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNDIiIGhlaWdodD0iMjAwIj48cmVjdCB3aWR0aD0iMjQyIiBoZWlnaHQ9IjIwMCIgZmlsbD0iI2VlZSIvPjx0ZXh0IHRleHQtYW5jaG9yPSJtaWRkbGUiIHg9IjEyMSIgeT0iMTAwIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjE1cHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+MjQyeDIwMDwvdGV4dD48L3N2Zz4=" /><div class="caption">
<h3>This is a lable label</h3>
<p>Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec id elit non mi porta gravida at eget metus. Nullam id dolor id nibh ultricies vehicula ut id elit.</p>
<p><a role="button" class="btn btn-primary" href="#">Button</a> <a role="button" class="btn btn-default" href="#">Button</a></p>
</div>
</div>
</div>
<div class="col-sm-6 col-md-4">
<div class="thumbnail">
          <img alt="100%x200" data-src="holder.js/100%x200" style="height: 200px; width: 100%; display: block;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIyNDIiIGhlaWdodD0iMjAwIj48cmVjdCB3aWR0aD0iMjQyIiBoZWlnaHQ9IjIwMCIgZmlsbD0iI2VlZSIvPjx0ZXh0IHRleHQtYW5jaG9yPSJtaWRkbGUiIHg9IjEyMSIgeT0iMTAwIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjE1cHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+MjQyeDIwMDwvdGV4dD48L3N2Zz4=" /><div class="caption">
<h3>Thumbnail label</h3>
<p>Cras justo odio, dapibus ac facilisis in, egestas eget quam. Donec id elit non mi porta gravida at eget metus. Nullam id dolor id nibh ultricies vehicula ut id elit.</p>
<p><a role="button" class="btn btn-primary" href="#">Button</a> <a role="button" class="btn btn-default" href="#">Button</a></p>
</div>
</div>
</div>
</div>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['Team'] = (object) array(
    'exported_path' => 'team',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/Team',
      'router_path' => 'node/%',
      'link_title' => 'Team',
      'options' => array(),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 2,
      'customized' => 0,
      'identifier' => 'main-menu:node-name/Team',
    ),
    'title' => 'Team',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1411834675,
    'comment' => 1,
    'translate' => 0,
    'machine_name' => 'Team',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<div class="bs-example">
    <div class="media">
      <a href="#" class="pull-left">
        <img alt="64x64" data-src="holder.js/64x64" class="media-object" style="width: 64px; height: 64px;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSI2NCIgaGVpZ2h0PSI2NCI+PHJlY3Qgd2lkdGg9IjY0IiBoZWlnaHQ9IjY0IiBmaWxsPSIjZWVlIi8+PHRleHQgdGV4dC1hbmNob3I9Im1pZGRsZSIgeD0iMzIiIHk9IjMyIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjEycHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+NjR4NjQ8L3RleHQ+PC9zdmc+">
      </a>
      <div class="media-body">
        <h4 class="media-heading">Name 1</h4>
        Cras sit amet nibh libero, in gravida nulla. Nulla vel metus scelerisque ante sollicitudin commodo. Cras purus odio, vestibulum in vulputate at, tempus viverra turpis. Fusce condimentum nunc ac nisi vulputate fringilla. Donec lacinia congue felis in faucibus.
      </div>
    </div>
    <div class="media">
      <a href="#" class="pull-left">
        <img alt="64x64" data-src="holder.js/64x64" class="media-object" style="width: 64px; height: 64px;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSI2NCIgaGVpZ2h0PSI2NCI+PHJlY3Qgd2lkdGg9IjY0IiBoZWlnaHQ9IjY0IiBmaWxsPSIjZWVlIi8+PHRleHQgdGV4dC1hbmNob3I9Im1pZGRsZSIgeD0iMzIiIHk9IjMyIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjEycHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+NjR4NjQ8L3RleHQ+PC9zdmc+">
      </a>
      <div class="media-body">
        <h4 class="media-heading">Name 2</h4>
        Cras sit amet nibh libero, in gravida nulla. Nulla vel metus scelerisque ante sollicitudin commodo. Cras purus odio, vestibulum in vulputate at, tempus viverra turpis. Fusce condimentum nunc ac nisi vulputate fringilla. Donec lacinia congue felis in faucibus.
       
      </div>
    </div>
  </div>',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<div class="bs-example">
<div class="media">
      <a href="#" class="pull-left"><br /><img alt="64x64" data-src="holder.js/64x64" class="media-object" style="width: 64px; height: 64px;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSI2NCIgaGVpZ2h0PSI2NCI+PHJlY3Qgd2lkdGg9IjY0IiBoZWlnaHQ9IjY0IiBmaWxsPSIjZWVlIi8+PHRleHQgdGV4dC1hbmNob3I9Im1pZGRsZSIgeD0iMzIiIHk9IjMyIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjEycHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+NjR4NjQ8L3RleHQ+PC9zdmc+" /><br /></a>
<div class="media-body">
<h4 class="media-heading">Name 1</h4>
<p>        Cras sit amet nibh libero, in gravida nulla. Nulla vel metus scelerisque ante sollicitudin commodo. Cras purus odio, vestibulum in vulputate at, tempus viverra turpis. Fusce condimentum nunc ac nisi vulputate fringilla. Donec lacinia congue felis in faucibus.
      </p></div>
</div>
<div class="media">
      <a href="#" class="pull-left"><br /><img alt="64x64" data-src="holder.js/64x64" class="media-object" style="width: 64px; height: 64px;" src="data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSI2NCIgaGVpZ2h0PSI2NCI+PHJlY3Qgd2lkdGg9IjY0IiBoZWlnaHQ9IjY0IiBmaWxsPSIjZWVlIi8+PHRleHQgdGV4dC1hbmNob3I9Im1pZGRsZSIgeD0iMzIiIHk9IjMyIiBzdHlsZT0iZmlsbDojYWFhO2ZvbnQtd2VpZ2h0OmJvbGQ7Zm9udC1zaXplOjEycHg7Zm9udC1mYW1pbHk6QXJpYWwsSGVsdmV0aWNhLHNhbnMtc2VyaWY7ZG9taW5hbnQtYmFzZWxpbmU6Y2VudHJhbCI+NjR4NjQ8L3RleHQ+PC9zdmc+" /><br /></a>
<div class="media-body">
<h4 class="media-heading">Name 2</h4>
<p>        Cras sit amet nibh libero, in gravida nulla. Nulla vel metus scelerisque ante sollicitudin commodo. Cras purus odio, vestibulum in vulputate at, tempus viverra turpis. Fusce condimentum nunc ac nisi vulputate fringilla. Donec lacinia congue felis in faucibus.</p>
</div>
</div>
</div>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
