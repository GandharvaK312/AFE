# AFE  

AFE Assignment  

E-profile: e profile/
News website: news website/
ppt: ppt/
hugging face model details: hugging face/

# THE CHRONICLE // Real-Time Global Intelligence Platform

A high-fidelity, client-side news ecosystem designed with an editorial, premium digital publication aesthetic. The application interfaces directly with external news telemetries to ingest, map, and structurally render real-time global media streams.

## ⚡ Architectural Features

* **Live Async Telemetry Ingestion:** Engineered a robust asynchronous JavaScript pipeline utilizing browser Promises (`async/await`) to stream live payloads from the GNews gateway API.
* **Asymmetric Editorial Layout:** Implemented a modern, responsive grid using Tailwind CSS. The engine dynamically evaluates payload indexes, giving structural prominence and an expansive horizontal format to the primary breaking headline (Index 0).
* **Fault-Tolerant Data Fallback:** Built-in proactive exception handling. If the remote API gateway encounters network latency or breaches its daily free-tier request quota (100 daily requests), the pipeline gracefully downgrades to map an immutable, highly realistic local mock data matrix rather than breaking the user interface.
* **Micro-Interactions & Telemetry Feedback:** Features an active marquee flash-ticker for fast breaking updates, broken-image fallback handling (`onerror` triggers), interactive live navigation filters, and dynamic buffer-synchronization timestamps.

## 🛠️ Tech Stack

* **Front-End Layout:** Tailwind CSS (Modern Directive Engine Engine)
* **Iconography & Styling:** FontAwesome Core v6 Engine
* **Data Layer Logic:** Native JavaScript (ES6+) Fetch Architecture

## 📡 API Management Note

This repository runs on client-side requests. Because public keys have a structural threshold budget of **100 request tokens per day** (where 1 token = 1 full page load, refresh, or category switch across all concurrent global users), the system is configured to auto-switch to a cached mock database when limits are exceeded. 

To utilize your own unrestricted live data buffer line:
1. Generate a free personal token key at [GNews.io](https://gnews.io/).
2. Open `index.html` and update the environment variable: