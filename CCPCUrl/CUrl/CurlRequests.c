//
//  CurlRequests.c
//  CCPCUrl
//
//  Created by 储诚鹏 on 2018/12/11.
//  Copyright © 2018 储诚鹏. All rights reserved.
//

#include "CurlRequests.h"

static size_t read_callback(void *ptr, size_t size, size_t nmemb, void *tream) {
    printf("abcd----------------------");
    return 0;
}

CURLcode requestGet(char *url) {
    CURLcode res = CURLE_OK;
    struct curl_slist *headers = NULL;
    headers = curl_slist_append(headers, "Accept:application/json");
    headers = curl_slist_append(headers, "Content-Type:application/json");
    headers = curl_slist_append(headers, "charset:utf-8");
    headers = curl_slist_append(headers, "Client-Type:ios");
    headers = curl_slist_append(headers, "Client-Version:4.1");
    headers = curl_slist_append(headers, "Device-Token:""");
    CURL *curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_URL, url);
        res = curl_easy_perform(curl);
        curl_slist_free_all(headers);
        curl_easy_cleanup(curl);
    }
    return res;
}



