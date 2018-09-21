#include "network_manager.h"

#include "esp_event_loop.h"
#include "esp_ota_ops.h"
#include "esp_partition.h"
#include "esp_spi_flash.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "mdns.h"
#include "tcpip_adapter.h"

#include <stdio.h>
#include <stdlib.h>

using NetworkManager::NETWORK_IS_CONNECTED;
using NetworkManager::NETWORK_IS_CONNECTED_IPV4;
using NetworkManager::NETWORK_TIME_AVAILABLE;
using NetworkManager::set_network;

char* binary_spreadsheet_insert_row_request_intent_req_fb_end = NULL;
char* binary_spreadsheet_insert_row_request_intent_req_fb_start = NULL;
char* binary_visualization_query_request_intent_req_fb_end = NULL;
char* binary_visualization_query_request_intent_req_fb_start = NULL;

const esp_partition_t* esp_ota_get_next_update_partition(const esp_partition_t *start_from)
{
  printf("NOT IMPLEMENTED: esp_ota_get_next_update_partition\n");
  return NULL;
}

const esp_partition_t* esp_ota_get_running_partition(void)
{
  printf("NOT IMPLEMENTED: esp_ota_get_running_partition\n");
  return NULL;
}

esp_err_t esp_ota_set_boot_partition(const esp_partition_t *partition)
{
  printf("NOT IMPLEMENTED: esp_ota_set_boot_partition\n");
  return ESP_OK;
}


const esp_partition_t* esp_partition_find_first(esp_partition_type_t type,
        esp_partition_subtype_t subtype, const char* label)
{
  printf("NOT IMPLEMENTED: esp_partition_find_first\n");
  return NULL;
}

uint32_t esp_random(void)
{
  return rand();
}

void /*IRAM_ATTR*/ esp_restart(void)
{
  printf("NOT IMPLEMENTED: esp_restart\n");
}

extern "C"
esp_err_t esp_wifi_connect(void)
{
  printf("NOT IMPLEMENTED: esp_wifi_connect\n");
  return ESP_OK;
}

extern "C"
esp_err_t esp_wifi_sta_get_ap_info(wifi_ap_record_t *ap_info)
{
  printf("NOT IMPLEMENTED: esp_wifi_sta_get_ap_info\n");
  return ESP_OK;
}

esp_err_t mdns_handle_system_event(void *ctx, system_event_t *event)
{
  printf("NOT IMPLEMENTED: mdns_handle_system_event\n");
  return ESP_OK;
}

esp_err_t mdns_hostname_set(const char * hostname)
{
  printf("NOT IMPLEMENTED: mdns_hostname_set\n");
  return ESP_OK;
}

esp_err_t mdns_init()
{
  printf("NOT IMPLEMENTED: mdns_init\n");
  return ESP_OK;
}

esp_err_t mdns_instance_name_set(const char * instance)
{
  printf("NOT IMPLEMENTED: mdns_instance_name_set\n");
  return ESP_OK;
}

esp_err_t mdns_service_add(const char * instance, const char * service, const char * proto, uint16_t port, mdns_txt_item_t txt[], size_t num_items)
{
  printf("NOT IMPLEMENTED: mdns_service_add\n");
  return ESP_OK;
}

esp_err_t spi_flash_read(size_t src_addr, void *dest, size_t size)
{
  printf("NOT IMPLEMENTED: spi_flash_read\n");
  return ESP_OK;
}

esp_err_t tcpip_adapter_create_ip6_linklocal(tcpip_adapter_if_t tcpip_if)
{
  printf("NOT IMPLEMENTED: tcpip_adapter_create_ip6_linklocal\n");
  return ESP_OK;
}

esp_err_t tcpip_adapter_get_ip_info(tcpip_adapter_if_t tcpip_if, tcpip_adapter_ip_info_t *ip_info)
{
  printf("NOT IMPLEMENTED: tcpip_adapter_get_ip_info\n");
  return ESP_OK;
}

esp_err_t esp_event_loop_init(system_event_cb_t cb, void *ctx)
{
  set_network(NETWORK_IS_CONNECTED_IPV4);
  set_network(NETWORK_IS_CONNECTED);
  set_network(NETWORK_TIME_AVAILABLE);

  printf("NOT IMPLEMENTED: esp_event_loop_init (faking network...)\n");
  return ESP_OK;
}

esp_err_t esp_ota_begin(const esp_partition_t *partition, size_t image_size, esp_ota_handle_t *out_handle)
{
  printf("NOT IMPLEMENTED: esp_ota_begin\n");
  return ESP_OK;
}

esp_err_t esp_ota_end(esp_ota_handle_t handle)
{
  printf("NOT IMPLEMENTED: esp_ota_end\n");
  return ESP_OK;
}

esp_err_t esp_ota_write(esp_ota_handle_t handle, const void *data, size_t size)
{
  printf("NOT IMPLEMENTED: esp_ota_write\n");
  return ESP_OK;
}

extern "C"
int64_t /*IRAM_ATTR*/ esp_timer_get_time()
{
  printf("NOT IMPLEMENTED: esp_timer_get_time\n");
  return 0;
}

size_t xPortGetFreeHeapSize(void)
{
  printf("NOT IMPLEMENTED: xPortGetFreeHeapSize\n");
  return 2147483648; // 2GB
}

extern "C"
void
sntp_init(void)
{
  printf("NOT IMPLEMENTED: sntp_init\n");
}

extern "C"
void
sntp_setoperatingmode(u8_t operating_mode)
{
  printf("NOT IMPLEMENTED: sntp_setoperatingmode\n");
}

extern "C"
void
sntp_setservername(u8_t idx, char *server)
{
  printf("NOT IMPLEMENTED: sntp_setservername\n");
}

extern "C"
int os_get_random(unsigned char *buf, size_t len)
{
  for (size_t i = 0; i < len; i++)
  {
    buf[i] = rand() % 256;
  }
  //printf("NOT IMPLEMENTED: os_get_random\n");
  return 0;
}
