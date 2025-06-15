const unsigned int interval = 1000;

static const char unknown_str[] = "n/a";

#define MAXLEN 2048

static const struct arg args[] = {
    { wifi_essid,    " W:%s |", "wlp0s20f3" },
    { run_command,   " %s |",   "amixer get Master | awk -F'[][]' '/%/ { vol=$2; state=$(NF-1) } END { print (state == \"on\" ? \"V+:\" : \"V-:\") vol }'" },
    { battery_state, " B%s:",   "BAT0" },
    { battery_perc,  "%s%% |",  "BAT0" },
    { datetime,      " %s ",    "%b-%d %a | %H:%M" },
};
