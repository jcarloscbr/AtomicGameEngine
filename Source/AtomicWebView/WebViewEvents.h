//
// Copyright (c) 2014-2016, THUNDERBEAST GAMES LLC All rights reserved
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#pragma once

#include <Atomic/Core/Object.h>

namespace Atomic
{

/// WebView load state change
EVENT(E_WEBVIEWLOADSTATECHANGE, WebViewLoadStateChange)
{
    PARAM(P_CLIENT, Client);   // WebClient*
    PARAM(P_LOADING, Loading);   // Boolean
    PARAM(P_CANGOBACK, CanGoBack);   // Boolean
    PARAM(P_CANGOFORWARD, CanGoForward);   // Boolean
}

/// WebView load start
EVENT(E_WEBVIEWLOADSTART, WebViewLoadStart)
{
    PARAM(P_CLIENT, Client);   // WebClient*
    PARAM(P_URL, Url);   // String
}

/// WebView load end
EVENT(E_WEBVIEWLOADEND, WebViewLoadEnd)
{
    PARAM(P_CLIENT, Client);   // WebClient*
    PARAM(P_URL, Url);   // String
}

/// WebView address change
EVENT(E_WEBVIEWADDRESSCHANGE, WebViewAddressChange)
{
    PARAM(P_CLIENT, Client);   // WebClient*
    PARAM(P_URL, Url);   // String
}

/// WebView title change
EVENT(E_WEBVIEWTITLECHANGE, WebViewTitleChange)
{
    PARAM(P_CLIENT, Client);   // WebClient*
    PARAM(P_TITLE, Title);   // String
}

/// WebView title change
EVENT(E_WEBVIEWJSEVALRESULT, WebViewJSEvalResult)
{
    PARAM(P_CLIENT, Client);   // WebClient*
    PARAM(P_EVALID, EvalID);   // unsigned
    PARAM(P_RESULT, Result);   // boolean (true: success, false: error)
    PARAM(P_VALUE, Value);   // String (sucess: eval's value, error: exception message)
}

/// WebView popup request
EVENT(E_WEBVIEWPOPUPREQUEST, WebViewPopupRequest)
{
    PARAM(P_CLIENT, Client);   // WebClient*
    PARAM(P_URL, Url);   // String
}

/// WebView load state change
EVENT(E_WEBVIEWGLOBALPROPERTIESCHANGED, WebViewGlobalPropertiesChanged)
{
}

/// WebView title change
EVENT(E_WEBMESSAGE, WebMessage)
{
    PARAM(P_HANDLER, Handler);          // WebMessageHandler*
    PARAM(P_QUERYID, QueryID);          // Double (Int64 CEF Side)
    PARAM(P_REQUEST, Request);          // String
    PARAM(P_PERSISTENT, Persistent);    // Bool

    PARAM(P_CEFBROWSER, Browser);       // CefBrowser*
    PARAM(P_CEFFRAME, Frame);           // CefFrame*

    PARAM(P_DEFERRED, Deferred);        // Return Value: Bool
}


}
