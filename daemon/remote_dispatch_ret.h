/* Automatically generated by remote_generate_stubs.pl.
 * Do not edit this file.  Any changes you make will be lost.
 */

    remote_get_type_ret val_remote_get_type_ret;
    remote_get_version_ret val_remote_get_version_ret;
    remote_get_max_vcpus_ret val_remote_get_max_vcpus_ret;
    remote_node_get_info_ret val_remote_node_get_info_ret;
    remote_get_capabilities_ret val_remote_get_capabilities_ret;
    remote_domain_create_xml_ret val_remote_domain_create_xml_ret;
    remote_domain_define_xml_ret val_remote_domain_define_xml_ret;
    remote_domain_dump_xml_ret val_remote_domain_dump_xml_ret;
    remote_domain_get_autostart_ret val_remote_domain_get_autostart_ret;
    remote_domain_get_info_ret val_remote_domain_get_info_ret;
    remote_domain_get_max_memory_ret val_remote_domain_get_max_memory_ret;
    remote_domain_get_max_vcpus_ret val_remote_domain_get_max_vcpus_ret;
    remote_domain_get_os_type_ret val_remote_domain_get_os_type_ret;
    remote_domain_get_vcpus_ret val_remote_domain_get_vcpus_ret;
    remote_list_defined_domains_ret val_remote_list_defined_domains_ret;
    remote_domain_lookup_by_id_ret val_remote_domain_lookup_by_id_ret;
    remote_domain_lookup_by_name_ret val_remote_domain_lookup_by_name_ret;
    remote_domain_lookup_by_uuid_ret val_remote_domain_lookup_by_uuid_ret;
    remote_num_of_defined_domains_ret val_remote_num_of_defined_domains_ret;
    remote_list_defined_networks_ret val_remote_list_defined_networks_ret;
    remote_list_domains_ret val_remote_list_domains_ret;
    remote_list_networks_ret val_remote_list_networks_ret;
    remote_network_create_xml_ret val_remote_network_create_xml_ret;
    remote_network_define_xml_ret val_remote_network_define_xml_ret;
    remote_network_dump_xml_ret val_remote_network_dump_xml_ret;
    remote_network_get_autostart_ret val_remote_network_get_autostart_ret;
    remote_network_get_bridge_name_ret val_remote_network_get_bridge_name_ret;
    remote_network_lookup_by_name_ret val_remote_network_lookup_by_name_ret;
    remote_network_lookup_by_uuid_ret val_remote_network_lookup_by_uuid_ret;
    remote_num_of_defined_networks_ret val_remote_num_of_defined_networks_ret;
    remote_num_of_domains_ret val_remote_num_of_domains_ret;
    remote_num_of_networks_ret val_remote_num_of_networks_ret;
    remote_domain_get_scheduler_type_ret val_remote_domain_get_scheduler_type_ret;
    remote_domain_get_scheduler_parameters_ret val_remote_domain_get_scheduler_parameters_ret;
    remote_get_hostname_ret val_remote_get_hostname_ret;
    remote_supports_feature_ret val_remote_supports_feature_ret;
    remote_domain_migrate_prepare_ret val_remote_domain_migrate_prepare_ret;
    remote_domain_migrate_finish_ret val_remote_domain_migrate_finish_ret;
    remote_domain_block_stats_ret val_remote_domain_block_stats_ret;
    remote_domain_interface_stats_ret val_remote_domain_interface_stats_ret;
    remote_auth_list_ret val_remote_auth_list_ret;
    remote_auth_sasl_init_ret val_remote_auth_sasl_init_ret;
    remote_auth_sasl_start_ret val_remote_auth_sasl_start_ret;
    remote_auth_sasl_step_ret val_remote_auth_sasl_step_ret;
    remote_auth_polkit_ret val_remote_auth_polkit_ret;
    remote_num_of_storage_pools_ret val_remote_num_of_storage_pools_ret;
    remote_list_storage_pools_ret val_remote_list_storage_pools_ret;
    remote_num_of_defined_storage_pools_ret val_remote_num_of_defined_storage_pools_ret;
    remote_list_defined_storage_pools_ret val_remote_list_defined_storage_pools_ret;
    remote_find_storage_pool_sources_ret val_remote_find_storage_pool_sources_ret;
    remote_storage_pool_create_xml_ret val_remote_storage_pool_create_xml_ret;
    remote_storage_pool_define_xml_ret val_remote_storage_pool_define_xml_ret;
    remote_storage_pool_lookup_by_name_ret val_remote_storage_pool_lookup_by_name_ret;
    remote_storage_pool_lookup_by_uuid_ret val_remote_storage_pool_lookup_by_uuid_ret;
    remote_storage_pool_lookup_by_volume_ret val_remote_storage_pool_lookup_by_volume_ret;
    remote_storage_pool_get_info_ret val_remote_storage_pool_get_info_ret;
    remote_storage_pool_dump_xml_ret val_remote_storage_pool_dump_xml_ret;
    remote_storage_pool_get_autostart_ret val_remote_storage_pool_get_autostart_ret;
    remote_storage_pool_num_of_volumes_ret val_remote_storage_pool_num_of_volumes_ret;
    remote_storage_pool_list_volumes_ret val_remote_storage_pool_list_volumes_ret;
    remote_storage_vol_create_xml_ret val_remote_storage_vol_create_xml_ret;
    remote_storage_vol_lookup_by_name_ret val_remote_storage_vol_lookup_by_name_ret;
    remote_storage_vol_lookup_by_key_ret val_remote_storage_vol_lookup_by_key_ret;
    remote_storage_vol_lookup_by_path_ret val_remote_storage_vol_lookup_by_path_ret;
    remote_storage_vol_get_info_ret val_remote_storage_vol_get_info_ret;
    remote_storage_vol_dump_xml_ret val_remote_storage_vol_dump_xml_ret;
    remote_storage_vol_get_path_ret val_remote_storage_vol_get_path_ret;
    remote_node_get_cells_free_memory_ret val_remote_node_get_cells_free_memory_ret;
    remote_node_get_free_memory_ret val_remote_node_get_free_memory_ret;
    remote_domain_block_peek_ret val_remote_domain_block_peek_ret;
    remote_domain_memory_peek_ret val_remote_domain_memory_peek_ret;
    remote_domain_events_register_ret val_remote_domain_events_register_ret;
    remote_domain_events_deregister_ret val_remote_domain_events_deregister_ret;
    remote_domain_migrate_prepare2_ret val_remote_domain_migrate_prepare2_ret;
    remote_domain_migrate_finish2_ret val_remote_domain_migrate_finish2_ret;
    remote_get_uri_ret val_remote_get_uri_ret;
    remote_node_num_of_devices_ret val_remote_node_num_of_devices_ret;
    remote_node_list_devices_ret val_remote_node_list_devices_ret;
    remote_node_device_lookup_by_name_ret val_remote_node_device_lookup_by_name_ret;
    remote_node_device_dump_xml_ret val_remote_node_device_dump_xml_ret;
    remote_node_device_get_parent_ret val_remote_node_device_get_parent_ret;
    remote_node_device_num_of_caps_ret val_remote_node_device_num_of_caps_ret;
    remote_node_device_list_caps_ret val_remote_node_device_list_caps_ret;
    remote_domain_get_security_label_ret val_remote_domain_get_security_label_ret;
    remote_node_get_security_model_ret val_remote_node_get_security_model_ret;
    remote_node_device_create_xml_ret val_remote_node_device_create_xml_ret;
    remote_storage_vol_create_xml_from_ret val_remote_storage_vol_create_xml_from_ret;
    remote_num_of_interfaces_ret val_remote_num_of_interfaces_ret;
    remote_list_interfaces_ret val_remote_list_interfaces_ret;
    remote_interface_lookup_by_name_ret val_remote_interface_lookup_by_name_ret;
    remote_interface_lookup_by_mac_string_ret val_remote_interface_lookup_by_mac_string_ret;
    remote_interface_get_xml_desc_ret val_remote_interface_get_xml_desc_ret;
    remote_interface_define_xml_ret val_remote_interface_define_xml_ret;
    remote_domain_xml_from_native_ret val_remote_domain_xml_from_native_ret;
    remote_domain_xml_to_native_ret val_remote_domain_xml_to_native_ret;
    remote_num_of_defined_interfaces_ret val_remote_num_of_defined_interfaces_ret;
    remote_list_defined_interfaces_ret val_remote_list_defined_interfaces_ret;
    remote_num_of_secrets_ret val_remote_num_of_secrets_ret;
    remote_list_secrets_ret val_remote_list_secrets_ret;
    remote_secret_lookup_by_uuid_ret val_remote_secret_lookup_by_uuid_ret;
    remote_secret_define_xml_ret val_remote_secret_define_xml_ret;
    remote_secret_get_xml_desc_ret val_remote_secret_get_xml_desc_ret;
    remote_secret_get_value_ret val_remote_secret_get_value_ret;
    remote_secret_lookup_by_usage_ret val_remote_secret_lookup_by_usage_ret;
    remote_is_secure_ret val_remote_is_secure_ret;
    remote_domain_is_active_ret val_remote_domain_is_active_ret;
    remote_domain_is_persistent_ret val_remote_domain_is_persistent_ret;
    remote_network_is_active_ret val_remote_network_is_active_ret;
    remote_network_is_persistent_ret val_remote_network_is_persistent_ret;
    remote_storage_pool_is_active_ret val_remote_storage_pool_is_active_ret;
    remote_storage_pool_is_persistent_ret val_remote_storage_pool_is_persistent_ret;
    remote_interface_is_active_ret val_remote_interface_is_active_ret;
    remote_get_lib_version_ret val_remote_get_lib_version_ret;
    remote_cpu_compare_ret val_remote_cpu_compare_ret;
    remote_domain_memory_stats_ret val_remote_domain_memory_stats_ret;
    remote_cpu_baseline_ret val_remote_cpu_baseline_ret;
    remote_domain_get_job_info_ret val_remote_domain_get_job_info_ret;
    remote_nwfilter_lookup_by_name_ret val_remote_nwfilter_lookup_by_name_ret;
    remote_nwfilter_lookup_by_uuid_ret val_remote_nwfilter_lookup_by_uuid_ret;
    remote_nwfilter_get_xml_desc_ret val_remote_nwfilter_get_xml_desc_ret;
    remote_num_of_nwfilters_ret val_remote_num_of_nwfilters_ret;
    remote_list_nwfilters_ret val_remote_list_nwfilters_ret;
    remote_nwfilter_define_xml_ret val_remote_nwfilter_define_xml_ret;
    remote_domain_has_managed_save_image_ret val_remote_domain_has_managed_save_image_ret;
    remote_domain_snapshot_create_xml_ret val_remote_domain_snapshot_create_xml_ret;
    remote_domain_snapshot_dump_xml_ret val_remote_domain_snapshot_dump_xml_ret;
    remote_domain_snapshot_num_ret val_remote_domain_snapshot_num_ret;
    remote_domain_snapshot_list_names_ret val_remote_domain_snapshot_list_names_ret;
    remote_domain_snapshot_lookup_by_name_ret val_remote_domain_snapshot_lookup_by_name_ret;
    remote_domain_has_current_snapshot_ret val_remote_domain_has_current_snapshot_ret;
    remote_domain_snapshot_current_ret val_remote_domain_snapshot_current_ret;
