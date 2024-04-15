#pragma comment(lib, "libcurl.lib")
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
    CURL* curl;
    CURLcode res;
    char poststring[200], nam[100],prj[100]; //to generate dynamic data

    printf("Welcome to libcurl application \n");
    printf("your name: ");
    scanf("%s", nam);
    printf("Project: ");
    scanf("%s", prj);
    sprintf(poststring, "name=%s&project=%s", nam, prj);

    
    curl = curl_easy_init();
    if (curl) {
        
        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2301488/appdevga.php");
      
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, poststring);

        
        res = curl_easy_perform(curl);
        
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        
        curl_easy_cleanup(curl);
    }
    
    return 0;
}
