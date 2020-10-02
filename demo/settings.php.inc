<?php

// Configure reverse proxy.
$conf['reverse_proxy'] = TRUE;
$conf['reverse_proxy_addresses'] = ['172.17.0.1'];
$base_url = 'https://demo.integralces.net';

// Configure mailing (disabled)
$conf['smtp_allowhtml'] = 1;
$conf['smtp_deliver'] = 0;
$conf['smtp_on'] = 1;
