#define CONFIG_YADECAP_MBUFS_COUNT (16 * 1024)
#define CONFIG_YADECAP_MBUF_SIZE (10 * 1024)
#define CONFIG_YADECAP_WORKER_PORTS_SIZE (1)
#define CONFIG_YADECAP_MBUFS_BURST_SIZE (32)
#define CONFIG_YADECAP_LPM4_EXTENDED_SIZE (4 * 1024)
#define CONFIG_YADECAP_LPM6_EXTENDED_SIZE (1 * 1024)
#define CONFIG_YADECAP_GB_ECMP_SIZE (15)
#define CONFIG_YADECAP_PORTS_SIZE (8)
#define CONFIG_YADECAP_MTU (9000)
#define CONFIG_YADECAP_IPV6_EXTENSIONS_MAX (8)
#define CONFIG_YADECAP_IPV6_EXTENSION_SIZE_MAX (16)
#define CONFIG_YADECAP_LOGICALPORTS_SIZE (4096 * CONFIG_YADECAP_PORTS_SIZE)
#define CONFIG_YADECAP_DECAPS_SIZE (16)
#define CONFIG_YADECAP_TUN64_SIZE (8)
#define CONFIG_YADECAP_TUN64_MAPPINGS_SIZE (32 * 1024)

/** @todo: lpm + vrf */
#define CONFIG_YADECAP_DREGRESS_SIZE (1)

#define CONFIG_YADECAP_ROUTES_SIZE (16)
#define CONFIG_YADECAP_INTERFACES_SIZE (128)
#define CONFIG_YADECAP_NAT64STATELESSES_SIZE (32)
#define CONFIG_YADECAP_NAT64STATELESS_TRANSLATIONS_SIZE (256 * 1024)
#define CONFIG_YADECAP_ACLS_SIZE (256)
#define YANET_CONFIG_ACL_NETWORK_LPM4_EXTENDED_CHUNKS_SIZE (4 * 1024)
#define YANET_CONFIG_ACL_NETWORK_DESTINATION_HT_SIZE (256 * 1024)
#define YANET_CONFIG_ACL_NETWORK_LPM6_TYPE lpm6_16x8bit_id32_dynamic
#define YANET_CONFIG_ACL_NETWORK_SOURCE_LPM6_CHUNKS_SIZE (16 * 1024 * 4)
#define YANET_CONFIG_ACL_NETWORK_DESTINATION_LPM6_CHUNKS_SIZE (16 * 1024 * 4)
#define YANET_CONFIG_ACL_NETWORK_TABLE_SIZE (128 * 1024 * 1024)
#define YANET_CONFIG_ACL_TRANSPORT_LAYERS_SIZE (128)
#define YANET_CONFIG_ACL_TRANSPORT_HT_SIZE (16 * 1024 * 1024)
#define YANET_CONFIG_ACL_TOTAL_HT_SIZE (16 * 1024 * 1024)
#define YANET_CONFIG_ACL_VALUES_SIZE (8 * 1024 * 1024)
#define YANET_CONFIG_ACL_STATES4_HT_SIZE (128 * 1024)
#define YANET_CONFIG_ACL_STATES6_HT_SIZE (256 * 1024)
#define CONFIG_YADECAP_TUN64_HT_SIZE (512 * 1024)
#define CONFIG_YADECAP_TUN64_HT_EXTENDED_SIZE (1024)
#define YANET_CONFIG_REPEAT_TTL (3)
#define YANET_CONFIG_DREGRESS_VALUES_SIZE (512 * 1024)
#define YANET_CONFIG_DREGRESS_HT_SIZE (8 * 1024 * 1024)
#define YANET_CONFIG_DREGRESS_HT_EXTENDED_SIZE (16 * 1024)
#define YANET_CONFIG_ROUTE_VALUES_SIZE (32 * 1024)
#define YANET_CONFIG_ROUTE_TUNNEL_LPM4_EXTENDED_SIZE (16 * 1024)
#define YANET_CONFIG_ROUTE_TUNNEL_LPM6_EXTENDED_SIZE (10 * 1024)
#define YANET_CONFIG_ROUTE_TUNNEL_VALUES_SIZE (256 * 1024)
#define YANET_CONFIG_ROUTE_TUNNEL_ECMP_SIZE (16)
#define YANET_CONFIG_ACL_COUNTERS_SIZE (128 * 1024)
#define YANET_CONFIG_NUMA_SIZE 2
#define YANET_CONFIG_COUNTERS_SIZE (8 * 1024 * 1024)
#define YANET_CONFIG_ROUTE_TUNNEL_WEIGHTS_SIZE (2 * 1024 * 1024)
#define YANET_CONFIG_COUNTER_FALLBACK_SIZE (64)
#define YANET_CONFIG_BALANCERS_SIZE (32)
#define YANET_CONFIG_BALANCER_SERVICES_SIZE (2 * 1024 * 1024)
#define YANET_CONFIG_BALANCER_REALS_SIZE (2 * 1024 * 1024)
#define YANET_CONFIG_BALANCER_WEIGHTS_SIZE (32 * 1024)
#define YANET_CONFIG_BALANCER_STATE_HT_SIZE (64 * 1024)
#define YANET_CONFIG_SAMPLES_SIZE (1024 * 64)
#define YANET_CONFIG_RING_PRIORITY_RATIO (4)
#define YANET_CONFIG_BURST_SIZE CONFIG_YADECAP_MBUFS_BURST_SIZE
#define YANET_CONFIG_CONFIG_CACHE_SIZE (5)
#define YANET_CONFIG_BALANCER_WLC_RECONFIGURE (1)
#define YANET_CONFIG_BALANCER_WLC_DEFAULT_POWER (10)
#define YANET_CONFIG_NAT64STATEFULS_SIZE (32)
#define YANET_CONFIG_NAT64STATEFUL_INSERT_TRIES (8)
#define YANET_CONFIG_NAT64STATEFUL_HT_SIZE (32 * 1024 * 1024)
#define YANET_CONFIG_NAT64STATEFUL_POOL_SIZE (64 * 1024)
#define YANET_CONFIG_STATE_TIMEOUT_DEFAULT (180)
#define YANET_CONFIG_STATE_TIMEOUT_MAX (32 * 1024)
#define YANET_CONFIG_ACL_TREE_CHUNKS_BUCKET_SIZE (64 * 1024)
#define YANET_CONFIG_DUMP_ID_SIZE (8)
#define YANET_CONFIG_DUMP_ID_TO_TAG_SIZE (1024 * 1024)
#define YANET_CONFIG_SHARED_RINGS_NUMBER (32)
#define YANET_DEFAULT_IPC_SHMKEY (12345)
