#ifndef CONSTDEF_H
#define CONSTDEF_H
#include <string>

using namespace std;

//config file name
const string CONF_PATH = "conf/monitor.conf";

//config file keys
const string DAEMON_MODE = "daemon_mode";
const string AUTO_RESTART = "auto_restart";
const string LOG_LEVEL = "log_level";
const string CONN_RETRY_COUNT = "connect_retry_count";
const string SCAN_INTERVAL = "scan_interval";
const string INSTANCE_NAME = "instance_name";
const string ZK_HOST = "zookeeper.";
const string ZK_LOG_PATH = "zk_log_path";
const string ZK_RECV_TIMEOUT = "zk_recv_timeout";

constexpr int MIN_LOG_LEVEL = 0;
constexpr int MAX_LOG_LEVEL = 6;

//log file
const string logPath = "logs/";
const string logFileNamePrefix = "qconf_monitor.log";

//process name
const string MONITOR_PROCESS_NAME = "qconf_monitor";

//pid file
const string PIDFILE = "monitor_pid";

//command file
const string CMDFILE = "tmp/cmd";

//return status
constexpr int M_OK = 0;
constexpr int M_ERR = -1;

// server status define
#define STATUS_UNKNOWN  -1
#define STATUS_UP        0
#define STATUS_OFFLINE   1
#define STATUS_DOWN      2

//znode and path
const string LOCK_ROOT_DIR = "/qconf_monitor_lock_node";
const string DEFAULT_INSTANCE_NAME = "default_instance";
const string MONITOR_LIST = "monitor_list";
const string SLASH = "/";
const string NODE_LIST = "md5_list";

//multi thread
#ifdef DEBUGT
constexpr int MAX_THREAD_NUM = 1;
#else
constexpr int MAX_THREAD_NUM = 64;
#endif

//op of mpdify serviceFatherToIp
const string DELETE = "delete";
const string ADD = "add";
const string CLEAR = "clear";

//command to process
const string CMD_RELOAD = "reload";
const string CMD_LIST = "list";
const string STATUS_LIST_FILE = "tmp/list";
const string ALL = "all";
const string UP = "up";
const string DOWN = "down";
const string OFFLINE = "offline";
const int LINE_LENGTH = 100;

#endif
