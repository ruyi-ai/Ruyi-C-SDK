#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>

int main(int argc, char *argv[])
{
    CURL *curl;
    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "http://api.ruyi.ai/v1/message?app_key=<APP_KEY>&user_id=1234&q=hello");
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    return 0;
}
