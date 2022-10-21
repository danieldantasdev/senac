1 - Execute o comando top em uma janela, mostrando apenas seus processos, enquanto faz os exercícios em outra janela:

a) Quantos processos você está executando neste momento?

-   244

b) Quais os programas com maior utilização de CPU que estão rodando?

-   firefox
-   vscode

c) O que faz o comando kill -9?

-   vai encerrar/matar o nono manualmente. O comando kill envia um sinal para um processo que o encerra. Se o usuário não especificar nenhum sinal a ser enviado junto com o comando kill, o sinal TERM padrão será enviado para encerrar o processo.

d) Mostre a quantidade de processadores que seu computador tem conforme o que consta no arquivo /proc/cpuinfo.

Executando o comando abaixo, recebo a quantidade de processadores

```
cat /proc/cpuinfo | grep -i mhz
```

cpu MHz : 1995.471
cpu MHz : 1995.976
cpu MHz : 600.000
cpu MHz : 500.000

e) Mostre a quantidade de memória disponível no seu computador conforme o que consta no arquivo /proc/meminfo.

MemTotal: 16303552 kB
MemFree: 8471728 kB
MemAvailable: 11950016 kB
Buffers: 305168 kB
Cached: 3752160 kB
SwapCached: 0 kB
Active: 1489148 kB
Inactive: 5330908 kB
Active(anon): 6908 kB
Inactive(anon): 3253680 kB
Active(file): 1482240 kB
Inactive(file): 2077228 kB
Unevictable: 442928 kB
Mlocked: 16 kB
SwapTotal: 3905532 kB
SwapFree: 3905532 kB
Dirty: 132 kB
Writeback: 0 kB
AnonPages: 3205660 kB
Mapped: 759204 kB
Shmem: 511260 kB
KReclaimable: 258480 kB
Slab: 383912 kB
SReclaimable: 258480 kB
SUnreclaim: 125432 kB
KernelStack: 16320 kB
PageTables: 38724 kB
NFS_Unstable: 0 kB
Bounce: 0 kB
WritebackTmp: 0 kB
CommitLimit: 12057308 kB
Committed_AS: 11208320 kB
VmallocTotal: 34359738367 kB
VmallocUsed: 43344 kB
VmallocChunk: 0 kB
Percpu: 4848 kB
HardwareCorrupted: 0 kB
AnonHugePages: 0 kB
ShmemHugePages: 0 kB
ShmemPmdMapped: 0 kB
FileHugePages: 0 kB
FilePmdMapped: 0 kB
HugePages_Total: 0
HugePages_Free: 0
HugePages_Rsvd: 0
HugePages_Surp: 0
Hugepagesize: 2048 kB
Hugetlb: 0 kB
DirectMap4k: 380732 kB
DirectMap2M: 7925760 kB
DirectMap1G: 9437184 kB

f) Verifique quais os processos em atividade no sistema atualmente, identificando o uso de memória e CPU de cada um (dica: use o comando ps auxw | more). Identifique o significado de cada uma das colunas da listagem obtida (ver a página de manual). Quais os processos que mais consomem recursos do sistema ?

USER PID %CPU %MEM VSZ RSS TTY STAT START TIME COMMAND
root 1 0.1 0.0 167016 12168 ? Ss 20:54 0:01 /sbin/init sp
lash
root 2 0.0 0.0 0 0 ? S 20:54 0:00 [kthreadd]
root 3 0.0 0.0 0 0 ? I< 20:54 0:00 [rcu_gp]
root 4 0.0 0.0 0 0 ? I< 20:54 0:00 [rcu_par_gp]
root 5 0.0 0.0 0 0 ? I< 20:54 0:00 [netns]
root 7 0.0 0.0 0 0 ? I< 20:54 0:00 [kworker/0:0H
-events_highpri]
root 9 0.0 0.0 0 0 ? I< 20:54 0:00 [mm_percpu_wq
]
root 10 0.0 0.0 0 0 ? S 20:54 0:00 [rcu_tasks_ru
de_]
root 11 0.0 0.0 0 0 ? S 20:54 0:00 [rcu_tasks_tr
ace]
root 12 0.0 0.0 0 0 ? S 20:54 0:00 [ksoftirqd/0]
root 13 0.1 0.0 0 0 ? I 20:54 0:01 [rcu_sched]
root 14 0.0 0.0 0 0 ? S 20:54 0:00 [migration/0]
root 15 0.0 0.0 0 0 ? S 20:54 0:00 [idle_inject/
0]
root 16 0.0 0.0 0 0 ? I 20:54 0:00 [kworker/0:1-
events]
root 17 0.0 0.0 0 0 ? S 20:54 0:00 [cpuhp/0]
root 18 0.0 0.0 0 0 ? S 20:54 0:00 [cpuhp/1]
root 19 0.0 0.0 0 0 ? S 20:54 0:00 [idle_inject/
1]
root 20 0.0 0.0 0 0 ? S 20:54 0:00 [migration/1]
root 21 0.2 0.0 0 0 ? S 20:54 0:03 [ksoftirqd/1]
root 23 0.0 0.0 0 0 ? I< 20:54 0:00 [kworker/1:0H
-events_highpri]
root 24 0.0 0.0 0 0 ? S 20:54 0:00 [cpuhp/2]
root 25 0.0 0.0 0 0 ? S 20:54 0:00 [idle_inject/
2]
root 26 0.0 0.0 0 0 ? S 20:54 0:00 [migration/2]
root 27 0.0 0.0 0 0 ? S 20:54 0:00 [ksoftirqd/2]
root 29 0.0 0.0 0 0 ? I< 20:54 0:00 [kworker/2:0H
-events_highpri]
root 30 0.0 0.0 0 0 ? S 20:54 0:00 [cpuhp/3]
root 31 0.0 0.0 0 0 ? S 20:54 0:00 [idle_inject/
3]
root 32 0.0 0.0 0 0 ? S 20:54 0:00 [migration/3]
root 33 0.0 0.0 0 0 ? S 20:54 0:00 [ksoftirqd/3]
root 35 0.0 0.0 0 0 ? I< 20:54 0:00 [kworker/3:0H
-events_highpri]
root 36 0.0 0.0 0 0 ? S 20:54 0:00 [kdevtmpfs]
root 37 0.0 0.0 0 0 ? I< 20:54 0:00 [inet_frag_wq
]
root 38 0.0 0.0 0 0 ? S 20:54 0:00 [kauditd]
root 39 0.0 0.0 0 0 ? S 20:54 0:00 [khungtaskd]
root 40 0.0 0.0 0 0 ? S 20:54 0:00 [oom_reaper]
root 41 0.0 0.0 0 0 ? I< 20:54 0:00 [writeback]
root 42 0.0 0.0 0 0 ? S 20:54 0:00 [kcompactd0]
root 43 0.0 0.0 0 0 ? SN 20:54 0:00 [ksmd]
root 44 0.0 0.0 0 0 ? SN 20:54 0:00 [khugepaged]
root 91 0.0 0.0 0 0 ? I< 20:54 0:00 [kintegrityd]
root 92 0.0 0.0 0 0 ? I< 20:54 0:00 [kblockd]
root 93 0.0 0.0 0 0 ? I< 20:54 0:00 [blkcg_punt_b
io]
root 96 0.0 0.0 0 0 ? I< 20:54 0:00 [tpm_dev_wq]
root 97 0.0 0.0 0 0 ? I< 20:54 0:00 [ata_sff]
root 99 0.0 0.0 0 0 ? I< 20:54 0:00 [md]
root 100 0.0 0.0 0 0 ? I< 20:54 0:00 [edac-poller]
root 101 0.0 0.0 0 0 ? I< 20:54 0:00 [devfreq_wq]
root 102 0.0 0.0 0 0 ? S 20:54 0:00 [watchdogd]
root 103 0.0 0.0 0 0 ? I< 20:54 0:00 [kworker/0:1H
-events_highpri]
root 105 0.0 0.0 0 0 ? S 20:54 0:00 [kswapd0]
root 106 0.0 0.0 0 0 ? S 20:54 0:00 [ecryptfs-kth
rea]
root 108 0.0 0.0 0 0 ? I< 20:54 0:00 [kthrotld]
root 109 0.0 0.0 0 0 ? S 20:54 0:00 [irq/42-pcieh
p]
root 110 0.0 0.0 0 0 ? I< 20:54 0:00 [acpi_thermal
_pm]
root 112 0.0 0.0 0 0 ? I< 20:54 0:00 [vfio-irqfd-c
lea]
root 113 0.0 0.0 0 0 ? I 20:54 0:01 [kworker/u8:3
-events_unbound]
root 114 0.0 0.0 0 0 ? I< 20:54 0:00 [kworker/3:1H
-events_highpri]
root 118 0.0 0.0 0 0 ? I< 20:54 0:00 [mld]
root 119 0.0 0.0 0 0 ? I< 20:54 0:00 [ipv6_addrcon
f]
root 121 0.5 0.0 0 0 ? I 20:54 0:08 [kworker/1:2-
inet_frag_wq]
root 129 0.0 0.0 0 0 ? I< 20:54 0:00 [kstrp]
root 132 0.0 0.0 0 0 ? I< 20:54 0:00 [zswap-shrink
]
root 133 0.2 0.0 0 0 ? I< 20:54 0:03 [kworker/u9:0
-i915_flip]
root 138 0.0 0.0 0 0 ? I< 20:54 0:00 [charger_mana
ger]
root 186 0.0 0.0 0 0 ? I< 20:54 0:00 [kworker/1:1H
-events_highpri]
root 190 0.0 0.0 0 0 ? I< 20:54 0:00 [kworker/2:1H
-events_highpri]
root 191 0.1 0.0 0 0 ? S 20:54 0:02 [irq/39-ELAN0
501]
root 196 0.0 0.0 0 0 ? S 20:54 0:00 [scsi_eh_0]
root 199 0.0 0.0 0 0 ? I< 20:54 0:00 [scsi_tmf_0]
root 200 0.0 0.0 0 0 ? S 20:54 0:00 [scsi_eh_1]
root 201 0.0 0.0 0 0 ? I< 20:54 0:00 [scsi_tmf_1]
root 238 0.0 0.0 0 0 ? S 20:54 0:00 [jbd2/sda2-8]
root 239 0.0 0.0 0 0 ? I< 20:54 0:00 [ext4-rsv-con
ver]
root 279 0.0 0.1 48272 17992 ? S<s 20:54 0:00 /lib/systemd/
systemd-journald
root 312 0.0 0.0 0 0 ? I< 20:54 0:00 [ipmi-msghand
ler]
root 340 0.0 0.0 26792 7148 ? Ss 20:54 0:00 /lib/systemd/
systemd-udevd
root 348 0.0 0.0 0 0 ? I 20:54 0:00 [kworker/3:3-
events]
root 406 0.0 0.0 0 0 ? S 20:54 0:00 [irq/49-mei_m
e]
root 449 0.0 0.0 0 0 ? I< 20:54 0:00 [cfg80211]
root 463 0.0 0.0 0 0 ? I< 20:54 0:00 [cryptd]
root 507 0.0 0.0 0 0 ? I 20:54 0:00 [kworker/2:6-
events]
root 524 0.0 0.0 0 0 ? S 20:54 0:00 [card0-crtc0]
root 526 0.0 0.0 0 0 ? S 20:54 0:00 [card0-crtc1]
root 527 0.0 0.0 0 0 ? S 20:54 0:00 [card0-crtc2]
root 752 0.0 0.0 0 0 ? I< 20:54 0:00 [kworker/u9:1
-hci0]
root 779 0.0 0.0 0 0 ? S 20:55 0:00 [jbd2/sdb1-8]
root 780 0.0 0.0 0 0 ? I< 20:55 0:00 [ext4-rsv-con
ver]
systemd+ 809 0.1 0.0 14824 6080 ? Ss 20:55 0:02 /lib/systemd/
systemd-oomd
systemd+ 810 0.0 0.0 25920 14084 ? Ss 20:55 0:01 /lib/systemd/
systemd-resolved
systemd+ 811 0.0 0.0 89376 6544 ? Ssl 20:55 0:00 /lib/systemd/
systemd-timesyncd
root 848 0.0 0.0 240844 8388 ? Ssl 20:55 0:00 /usr/libexec/
accounts-daemon
root 849 0.0 0.0 2812 1232 ? Ss 20:55 0:00 /usr/sbin/acp
id
avahi 852 0.0 0.0 7712 3656 ? Ss 20:55 0:00 avahi-daemon:
running [lobinho-Aspire-E5-473.local]
root 853 0.0 0.0 10624 5004 ? Ss 20:55 0:00 /usr/lib/blue
tooth/bluetoothd
root 855 0.0 0.0 9500 2940 ? Ss 20:55 0:00 /usr/sbin/cro
n -f -P
message+ 856 0.1 0.0 11112 6620 ? Ss 20:55 0:01 @dbus-daemon
--system --address=systemd: --nofork --nopidfile --systemd-activation --syslog-o
nly
root 857 0.0 0.1 409840 20148 ? Ssl 20:55 0:00 /usr/sbin/Net
workManager --no-daemon
root 863 0.0 0.0 82764 3684 ? Ssl 20:55 0:00 /usr/sbin/irq
balance --foreground
root 864 0.0 0.1 41044 20948 ? Ss 20:55 0:00 /usr/bin/pyth
on3 /usr/bin/networkd-dispatcher --run-startup-triggers
root 866 0.1 0.0 236900 10376 ? Ssl 20:55 0:02 /usr/libexec/
polkitd --no-debug
root 867 0.0 0.0 240324 7548 ? Ssl 20:55 0:00 /usr/libexec/
power-profiles-daemon
syslog 868 0.0 0.0 222400 5780 ? Ssl 20:55 0:00 /usr/sbin/rsy
slogd -n -iNONE
root 870 0.2 0.2 1096512 48380 ? Ssl 20:55 0:03 /usr/lib/snap
d/snapd
root 872 0.0 0.0 236648 6540 ? Ssl 20:55 0:00 /usr/libexec/
switcheroo-control
root 875 0.0 0.0 48228 8116 ? Ss 20:55 0:00 /lib/systemd/
systemd-logind
root 876 0.0 0.0 128564 9108 ? Ssl 20:55 0:00 /usr/sbin/the
rmald --systemd --dbus-enable --adaptive
root 885 0.0 0.0 393300 14008 ? Ssl 20:55 0:00 /usr/libexec/
udisks2/udisksd
root 887 0.0 0.0 17680 11724 ? Ss 20:55 0:00 /sbin/wpa_sup
plicant -u -s -O /run/wpa_supplicant
avahi 889 0.0 0.0 7440 344 ? S 20:55 0:00 avahi-daemon:
chroot helper
root 1004 0.0 0.1 118156 23368 ? Ssl 20:55 0:00 /usr/bin/pyth
on3 /usr/share/unattended-upgrades/unattended-upgrade-shutdown --wait-for-signal
root 1006 0.0 0.0 243280 12000 ? Ssl 20:55 0:00 /usr/sbin/Mod
emManager
root 1011 0.0 0.3 1355800 52540 ? Ssl 20:55 0:00 /usr/bin/cont
ainerd
root 1071 0.0 0.0 241612 9416 ? Ssl 20:55 0:00 /usr/sbin/gdm
3
root 1102 0.0 0.0 0 0 ? S 20:55 0:00 [ath9k-hwrng]
mysql 1120 0.8 2.4 2445260 392428 ? Ssl 20:55 0:11 /usr/sbin/mys
qld
rtkit 1179 0.0 0.0 154000 1536 ? SNsl 20:55 0:00 /usr/libexec/
rtkit-daemon
root 1637 0.0 0.0 242892 9532 ? Ssl 20:55 0:00 /usr/libexec/
upowerd
root 1748 0.0 0.4 1373152 65960 ? Ssl 20:55 0:00 /usr/bin/dock
erd -H fd:// --containerd=/run/containerd/containerd.sock
kernoops 1751 0.0 0.0 13080 456 ? Ss 20:55 0:00 /usr/sbin/ker
neloops --test
kernoops 1754 0.0 0.0 13080 456 ? Ss 20:55 0:00 /usr/sbin/ker
neloops
root 1959 0.6 0.1 447528 28696 ? Ssl 20:55 0:09 /usr/libexec/
packagekitd
colord 2344 0.0 0.0 246028 14016 ? Ssl 20:55 0:00 /usr/libexec/
colord
root 2748 0.0 0.0 171020 11264 ? Sl 20:55 0:00 gdm-session-w
orker [pam/gdm-password]
lobinho 2900 0.0 0.0 18044 10756 ? Ss 20:55 0:00 /lib/systemd/
systemd --user
lobinho 2901 0.0 0.0 170316 4372 ? S 20:55 0:00 (sd-pam)
lobinho 2907 0.0 0.0 39856 6720 ? S<sl 20:55 0:00 /usr/bin/pipe
wire
lobinho 2908 0.0 0.0 23620 6460 ? Ssl 20:55 0:00 /usr/bin/pipe
wire-media-session
lobinho 2909 0.0 0.1 1423508 27608 ? S<sl 20:55 0:00 /usr/bin/puls
eaudio --daemonize=no --log-target=journal
lobinho 2920 0.0 0.0 241256 7648 ? Sl 20:55 0:00 /usr/bin/gnom
e-keyring-daemon --daemonize --login
lobinho 2924 0.0 0.0 9668 5904 ? Ss 20:55 0:01 /usr/bin/dbus
-daemon --session --address=systemd: --nofork --nopidfile --systemd-activation -
-syslog-only
lobinho 2932 0.0 0.0 240980 8488 ? Ssl 20:55 0:00 /usr/libexec/
gvfsd
lobinho 2947 0.0 0.0 380884 6392 ? Sl 20:55 0:00 /usr/libexec/
gvfsd-fuse /run/user/1000/gvfs -f
lobinho 2952 0.0 0.0 537348 7820 ? Ssl 20:55 0:00 /usr/libexec/
xdg-document-portal
lobinho 2963 0.0 0.0 236592 5428 ? Ssl 20:55 0:00 /usr/libexec/
xdg-permission-store
root 2972 0.0 0.0 2792 1048 ? Ss 20:55 0:00 fusermount3 -
o rw,nosuid,nodev,fsname=portal,auto_unmount,subtype=portal -- /run/user/1000/do
c
lobinho 3001 0.0 0.0 162704 6184 tty2 Ssl+ 20:55 0:00 /usr/libexec/
gdm-wayland-session env GNOME_SHELL_SESSION_MODE=ubuntu /usr/bin/gnome-session -
-session=ubuntu
lobinho 3004 0.0 0.0 223348 15676 tty2 Sl+ 20:55 0:00 /usr/libexec/
gnome-session-binary --session=ubuntu
lobinho 3038 0.0 0.0 91908 5096 ? Ssl 20:55 0:00 /usr/libexec/
gnome-session-ctl --monitor
lobinho 3051 0.0 0.1 520624 19004 ? Ssl 20:55 0:00 /usr/libexec/
gnome-session-binary --systemd-service --session=ubuntu
lobinho 3076 0.0 0.0 309588 7956 ? Sl 20:55 0:00 /usr/libexec/
at-spi-bus-launcher --launch-immediately
lobinho 3081 7.0 1.6 5145912 272312 ? Rsl 20:55 1:43 /usr/bin/gnom
e-shell
lobinho 3090 0.0 0.0 8428 4368 ? S 20:55 0:00 /usr/bin/dbus
-daemon --config-file=/usr/share/defaults/at-spi2/accessibility.conf --nofork --
print-address 11 --address=unix:path=/run/user/1000/at-spi/bus
root 3112 0.0 0.0 0 0 ? S< 20:55 0:00 [krfcommd]
lobinho 3274 0.0 0.1 582984 18236 ? Sl 20:55 0:00 /usr/libexec/
gnome-shell-calendar-server
lobinho 3278 0.0 0.1 309508 27508 ? Ssl 20:55 0:00 /snap/snapd-d
esktop-integration/14/bin/snapd-desktop-integration
lobinho 3281 0.0 0.1 393024 26304 ? Ssl 20:55 0:00 /usr/libexec/
evolution-source-registry
lobinho 3365 0.0 0.0 157100 6172 ? Ssl 20:55 0:00 /usr/libexec/
dconf-service
lobinho 3377 0.0 0.1 841268 31036 ? Ssl 20:55 0:00 /usr/libexec/
evolution-calendar-factory
lobinho 3381 0.0 0.0 316656 9708 ? Ssl 20:55 0:00 /usr/libexec/
gvfs-udisks2-volume-monitor
lobinho 3403 0.0 0.0 237852 7196 ? Ssl 20:55 0:00 /usr/libexec/
gvfs-gphoto2-volume-monitor
lobinho 3410 0.0 0.0 236768 6768 ? Ssl 20:55 0:00 /usr/libexec/
gvfs-mtp-volume-monitor
lobinho 3414 0.0 0.0 315544 8500 ? Ssl 20:55 0:00 /usr/libexec/
gvfs-afc-volume-monitor
lobinho 3422 0.0 0.0 624364 14552 ? Ssl 20:55 0:00 /usr/libexec/
xdg-desktop-portal
lobinho 3423 0.0 0.0 236968 6828 ? Ssl 20:55 0:00 /usr/libexec/
gvfs-goa-volume-monitor
lobinho 3434 0.0 0.1 746784 29704 ? Ssl 20:55 0:00 /usr/libexec/
evolution-addressbook-factory
lobinho 3450 0.0 0.1 524736 30488 ? Ssl 20:55 0:00 /usr/libexec/
xdg-desktop-portal-gnome
lobinho 3504 0.0 0.0 315492 8604 ? Sl 20:55 0:00 /usr/libexec/
gvfsd-trash --spawner :1.2 /org/gtk/gvfs/exec_spaw/0
lobinho 3568 0.0 0.1 2604072 27716 ? Sl 20:55 0:00 /usr/bin/gjs
/usr/share/gnome-shell/org.gnome.Shell.Notifications
lobinho 3570 0.0 0.0 162676 7364 ? Sl 20:55 0:00 /usr/libexec/
at-spi2-registryd --use-gnome-session
lobinho 3581 0.0 0.0 2888 980 ? Ss 20:55 0:00 sh -c /usr/bi
n/ibus-daemon --panel disable $([ "$XDG_SESSION_TYPE" = "x11" ] && echo "--xim")
lobinho 3583 0.0 0.0 311048 7236 ? Ssl 20:55 0:00 /usr/libexec/
gsd-a11y-settings
lobinho 3585 0.0 0.0 315404 12260 ? Sl 20:55 0:01 /usr/bin/ibus
-daemon --panel disable
lobinho 3586 0.0 0.1 611048 27668 ? Ssl 20:55 0:00 /usr/libexec/
gsd-color
lobinho 3587 0.0 0.1 376080 16624 ? Ssl 20:55 0:00 /usr/libexec/
gsd-datetime
lobinho 3588 0.0 0.0 312816 8456 ? Ssl 20:55 0:00 /usr/libexec/
gsd-housekeeping
lobinho 3589 0.0 0.1 341632 22816 ? Ssl 20:55 0:00 /usr/libexec/
gsd-keyboard
lobinho 3592 0.0 0.1 865260 27612 ? Ssl 20:55 0:00 /usr/libexec/
gsd-media-keys
lobinho 3593 0.0 0.1 451520 26848 ? Ssl 20:55 0:00 /usr/libexec/
gsd-power
lobinho 3599 0.0 0.0 250220 11472 ? Ssl 20:55 0:00 /usr/libexec/
gsd-print-notifications
lobinho 3629 0.0 0.0 232260 6632 ? Sl 20:55 0:00 /usr/libexec/
gsd-disk-utility-notify
lobinho 3633 0.0 0.4 738136 67348 ? Sl 20:55 0:00 /usr/libexec/
evolution-data-server/evolution-alarm-notify
lobinho 3654 0.0 0.0 458220 6828 ? Ssl 20:55 0:00 /usr/libexec/
gsd-rfkill
lobinho 3658 0.0 0.0 236652 6416 ? Ssl 20:55 0:00 /usr/libexec/
gsd-screensaver-proxy
lobinho 3660 0.0 0.0 466692 11188 ? Ssl 20:55 0:00 /usr/libexec/
gsd-sharing
lobinho 3670 0.0 0.0 386660 8504 ? Ssl 20:55 0:00 /usr/libexec/
gsd-smartcard
lobinho 3672 0.0 0.0 319964 9888 ? Ssl 20:55 0:00 /usr/libexec/
gsd-sound
lobinho 3685 0.0 0.1 415956 23324 ? Ssl 20:55 0:00 /usr/libexec/
gsd-wacom
lobinho 3735 0.0 0.0 237904 7584 ? Sl 20:55 0:00 /usr/libexec/
ibus-dconf
lobinho 3738 0.0 0.0 342720 15260 ? Sl 20:55 0:00 /usr/libexec/
gsd-printer
lobinho 3739 0.1 0.1 348184 29120 ? Sl 20:55 0:02 /usr/libexec/
ibus-extension-gtk3
lobinho 3745 0.0 0.0 237816 7948 ? Sl 20:55 0:00 /usr/libexec/
ibus-portal
lobinho 3771 0.7 1.4 1322864 232928 ? Sl 20:55 0:10 /snap/snap-st
ore/599/usr/bin/snap-store --gapplication-service
lobinho 3847 0.0 0.0 164064 7764 ? Sl 20:55 0:00 /usr/libexec/
ibus-engine-simple
lobinho 4041 0.1 0.1 709544 30272 ? RNsl 20:55 0:02 /usr/libexec/
tracker-miner-fs-3
lobinho 4122 0.0 0.1 2669716 28016 ? Sl 20:55 0:00 /usr/bin/gjs
/usr/share/gnome-shell/org.gnome.ScreenSaver
lobinho 4164 0.2 0.3 2856904 61708 ? Sl 20:55 0:03 gjs /usr/shar
e/gnome-shell/extensions/ding@rastersoft.com/ding.js -E -P /usr/share/gnome-shel
l/extensions/ding@rastersoft.com -M 0 -D 0:0:1366:768:1:27:0:68:0:0
lobinho 4187 0.0 0.1 345504 26444 ? Ssl 20:55 0:00 /usr/libexec/
xdg-desktop-portal-gtk
root 4321 0.0 0.0 72608 13656 ? Ss 20:55 0:00 /usr/sbin/cup
sd -l
root 4330 0.0 0.0 172612 11300 ? Ssl 20:55 0:00 /usr/sbin/cup
s-browsed
lobinho 4454 0.0 0.0 163276 6648 ? Ssl 20:55 0:00 /usr/libexec/
gvfsd-metadata
root 4459 0.1 0.5 446464 84972 ? Ssl 20:55 0:02 /usr/libexec/
fwupd/fwupd
root 7275 0.0 0.0 0 0 ? I< 20:56 0:00 [iprt-VBoxWQu
eue]
root 7276 0.0 0.0 0 0 ? S 20:56 0:00 [iprt-VBoxTsc
Thr]
lobinho 7310 23.9 2.7 3607064 454900 ? Sl 20:56 5:41 /snap/firefox
/1883/usr/lib/firefox/firefox
lobinho 7402 3.7 0.4 618120 79760 ? Sl 20:56 0:54 /usr/bin/Xway
land :0 -rootless -noreset -accessx -core -auth /run/user/1000/.mutter-Xwaylanda
uth.LUL8S1 -listen 4 -listen 5 -displayfd 6 -initfd 7
lobinho 7419 0.0 0.4 804452 69480 ? Ssl 20:56 0:00 /usr/libexec/
gsd-xsettings
lobinho 7448 0.0 0.1 195152 26236 ? Sl 20:56 0:00 /usr/libexec/
ibus-x11
lobinho 7524 0.0 0.2 219760 36944 ? Sl 20:56 0:00 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -parentBuildID 20220923151236 -prefsL
en 27158 -prefMapSize 238647 -appDir /snap/firefox/1883/usr/lib/firefox/browser
{fbc07e45-8b07-4d89-a615-ce43e205f6fe} 7310 true socket
lobinho 7543 0.3 0.8 2491216 140980 ? Sl 20:56 0:05 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -childID 1 -isForBrowser -prefsLen 27
158 -prefMapSize 238647 -jsInitLen 246848 -parentBuildID 20220923151236 -appDir
/snap/firefox/1883/usr/lib/firefox/browser {129009b4-7f35-48f8-86e7-b9bdb335d407
} 7310 true tab
lobinho 7584 0.0 0.1 794196 25788 ? Sl 20:56 0:00 /usr/bin/snap
userd
lobinho 7703 0.3 0.6 2462048 110032 ? Sl 20:56 0:04 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -childID 2 -isForBrowser -prefsLen 32
588 -prefMapSize 238647 -jsInitLen 246848 -parentBuildID 20220923151236 -appDir
/snap/firefox/1883/usr/lib/firefox/browser {b6aeec1a-fb9c-4802-a49a-90cc8b3b3ca0
} 7310 true tab
lobinho 7922 2.9 0.8 2559732 141124 ? Sl 20:56 0:41 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -childID 6 -isForBrowser -prefsLen 32
783 -prefMapSize 238647 -jsInitLen 246848 -parentBuildID 20220923151236 -appDir
/snap/firefox/1883/usr/lib/firefox/browser {9eb4f84a-2e0f-4fa9-9a67-d85ac8b9615c
} 7310 true tab
lobinho 7940 0.0 0.1 419400 26568 ? Sl 20:56 0:00 update-notifi
er
lobinho 8015 0.7 0.9 2531220 147216 ? Sl 20:56 0:11 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -childID 7 -isForBrowser -prefsLen 32
783 -prefMapSize 238647 -jsInitLen 246848 -parentBuildID 20220923151236 -appDir
/snap/firefox/1883/usr/lib/firefox/browser {518c49e0-cdd9-400d-b605-1a4842ec3d3b
} 7310 true tab
lobinho 8022 0.6 1.1 2545492 183724 ? Sl 20:56 0:08 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -childID 8 -isForBrowser -prefsLen 32
783 -prefMapSize 238647 -jsInitLen 246848 -parentBuildID 20220923151236 -appDir
/snap/firefox/1883/usr/lib/firefox/browser {8b863275-28d2-4d29-87c8-2a3690dda6f0
} 7310 true tab
root 8476 0.2 0.0 0 0 ? I 21:00 0:03 [kworker/1:1-
events]
lobinho 8632 0.5 0.3 555980 54364 ? Ssl 21:04 0:05 /usr/libexec/
gnome-terminal-server
lobinho 8658 0.3 0.0 15384 8696 pts/0 Ss 21:04 0:03 zsh
lobinho 9103 2.2 0.9 38355396 157212 ? SLsl 21:04 0:20 /usr/share/co
de/code --enable-crashpad .
lobinho 9109 0.0 0.2 33759356 45680 ? S 21:04 0:00 /usr/share/co
de/code --type=zygote --no-zygote-sandbox --enable-crashpad --enable-crashpad
lobinho 9110 0.0 0.2 33759348 44372 ? S 21:04 0:00 /usr/share/co
de/code --type=zygote --enable-crashpad --enable-crashpad
lobinho 9113 0.0 0.0 33759348 7660 ? S 21:04 0:00 /usr/share/co
de/code --type=zygote --enable-crashpad --enable-crashpad
lobinho 9137 0.0 0.0 33575740 3176 ? Sl 21:04 0:00 /usr/share/co
de/chrome_crashpad_handler --monitor-self-annotation=ptype=crashpad-handler --no
-rate-limit --database=/home/lobinho/.config/Code/Crashpad --url=appcenter://cod
e?aid=fba07a4d-84bd-4fc8-a125-9640fc8ce171&uid=b032fa0a-10fe-418b-91f3-7fcbb9614
df4&iid=b032fa0a-10fe-418b-91f3-7fcbb9614df4&sid=b032fa0a-10fe-418b-91f3-7fcbb96
14df4 --annotation=\_companyName=Microsoft --annotation=\_productName=VSCode --ann
otation=\_version=1.71.2 --annotation=lsb-release=Ubuntu 22.04.1 LTS --annotation
=plat=Linux --annotation=prod=Electron --annotation=ver=19.0.12 --initial-client
-fd=43 --shared-client-connection
lobinho 9152 2.8 0.7 34135596 119980 ? Sl 21:04 0:25 /usr/share/co
de/code --type=gpu-process --enable-crashpad --crashpad-handler-pid=9137 --enabl
e-crash-reporter=4b9b4817-4ce7-4f52-9496-524fd2340af1,no_channel --user-data-dir
=/home/lobinho/.config/Code --gpu-preferences=WAAAAAAAAAAgAAAIAAAAAAAAAAAAAAAAAA
BgAAAAAAA4AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAIAAAAAAAAAABAAAAAA
AAAAgAAAAAAAAACAAAAAAAAAAIAAAAAAAAAA== --shared-files --field-trial-handle=0,i,1
5939033054349968251,17445631165896765969,131072 --disable-features=CalculateNati
veWinOcclusion,SpareRendererForSitePerProcess
lobinho 9208 0.0 0.3 33808720 62684 ? Sl 21:04 0:00 /usr/share/co
de/code --type=utility --utility-sub-type=network.mojom.NetworkService --lang=pt
-BR --service-sandbox-type=none --enable-crashpad --crashpad-handler-pid=9137 --
enable-crash-reporter=4b9b4817-4ce7-4f52-9496-524fd2340af1,no_channel --user-dat
a-dir=/home/lobinho/.config/Code --standard-schemes=vscode-webview,vscode-file -
-secure-schemes=vscode-webview,vscode-file --bypasscsp-schemes --cors-schemes=vs
code-webview,vscode-file --fetch-schemes=vscode-webview,vscode-file --service-wo
rker-schemes=vscode-webview --streaming-schemes --shared-files=v8_context_snapsh
ot_data:100 --field-trial-handle=0,i,15939033054349968251,17445631165896765969,1
31072 --disable-features=CalculateNativeWinOcclusion,SpareRendererForSitePerProc
ess --enable-crashpad
lobinho 9253 12.3 1.9 61315816 314924 ? Sl 21:04 1:50 /usr/share/co
de/code --type=renderer --enable-crashpad --crashpad-handler-pid=9137 --enable-c
rash-reporter=4b9b4817-4ce7-4f52-9496-524fd2340af1,no_channel --user-data-dir=/h
ome/lobinho/.config/Code --standard-schemes=vscode-webview,vscode-file --secure-
schemes=vscode-webview,vscode-file --bypasscsp-schemes --cors-schemes=vscode-web
view,vscode-file --fetch-schemes=vscode-webview,vscode-file --service-worker-sch
emes=vscode-webview --streaming-schemes --app-path=/usr/share/code/resources/app
--no-sandbox --no-zygote --enable-blink-features=HighlightAPI --lang=pt-BR --nu
m-raster-threads=2 --enable-main-frame-before-activation --renderer-client-id=4
--launch-time-ticks=649383098 --shared-files=v8_context_snapshot_data:100 --fiel
d-trial-handle=0,i,15939033054349968251,17445631165896765969,131072 --disable-fe
atures=CalculateNativeWinOcclusion,SpareRendererForSitePerProcess --vscode-windo
w-config=vscode:4eac3968-e1ca-458a-aafa-c13b9abb8b90 --enable-crashpad
lobinho 9268 7.9 2.5 59145944 418428 ? Sl 21:05 1:10 /usr/share/co
de/code --ms-enable-electron-run-as-node --inspect-port=0 /usr/share/code/resour
ces/app/out/bootstrap-fork --type=extensionHost --skipWorkspaceStorageLock
lobinho 9281 3.1 0.9 46622100 152564 ? Sl 21:05 0:28 /usr/share/co
de/code --type=renderer --enable-crashpad --crashpad-handler-pid=9137 --enable-c
rash-reporter=4b9b4817-4ce7-4f52-9496-524fd2340af1,no_channel --user-data-dir=/h
ome/lobinho/.config/Code --standard-schemes=vscode-webview,vscode-file --secure-
schemes=vscode-webview,vscode-file --bypasscsp-schemes --cors-schemes=vscode-web
view,vscode-file --fetch-schemes=vscode-webview,vscode-file --service-worker-sch
emes=vscode-webview --streaming-schemes --app-path=/usr/share/code/resources/app
--no-sandbox --no-zygote --node-integration-in-worker --lang=pt-BR --num-raster
-threads=2 --enable-main-frame-before-activation --renderer-client-id=5 --launch
-time-ticks=654049246 --shared-files=v8_context_snapshot_data:100 --field-trial-
handle=0,i,15939033054349968251,17445631165896765969,131072 --disable-features=C
alculateNativeWinOcclusion,SpareRendererForSitePerProcess --vscode-window-config
=vscode:741d62c1-a1a2-4afa-b996-278e31be70b1 --vscode-window-kind=shared-process
--enable-crashpad
lobinho 9295 0.0 0.4 38164688 75476 ? Sl 21:05 0:00 /usr/share/co
de/code --ms-enable-electron-run-as-node /usr/share/code/resources/app/out/boots
trap-fork --type=ptyHost --logsPath /home/lobinho/.config/Code/logs/20221002T210
457
lobinho 9316 0.1 0.6 38172748 100968 ? Sl 21:05 0:01 /usr/share/co
de/code --ms-enable-electron-run-as-node /usr/share/code/resources/app/out/boots
trap-fork --type=fileWatcher
root 9605 0.0 0.0 0 0 ? I 21:05 0:00 [kworker/u8:1
-phy0]
lobinho 9645 0.1 0.5 38123096 97196 ? Sl 21:05 0:00 /usr/share/co
de/code --ms-enable-electron-run-as-node /usr/share/code/resources/app/extension
s/html-language-features/server/dist/node/htmlServerMain --node-ipc --clientProc
essId=9268
lobinho 9646 1.9 1.6 48641748 270692 ? Sl 21:05 0:16 /usr/share/co
de/code --ms-enable-electron-run-as-node /home/lobinho/.vscode/extensions/angula
r.ng-template-14.2.0/server --logToConsole --ngProbeLocations /home/lobinho/.vsc
ode/extensions/angular.ng-template-14.2.0,/home/lobinho/Documentos/analise_desen
volvimento_sistema/faculdade_senac/senac --includeAutomaticOptionalChainCompleti
ons --includeCompletionsWithSnippetText --tsProbeLocations ,/home/lobinho/.vscod
e/extensions/angular.ng-template-14.2.0,/home/lobinho/Documentos/analise_desenvo
lvimento_sistema/faculdade_senac/senac --node-ipc --clientProcessId=9268
lobinho 9653 0.1 0.5 38123096 82796 ? Sl 21:05 0:00 /usr/share/co
de/code --ms-enable-electron-run-as-node /home/lobinho/.vscode/extensions/formul
ahendry.auto-rename-tag-0.1.10/packages/server/dist/serverMain.js --node-ipc --c
lientProcessId=9268
lobinho 9660 0.3 0.5 38123096 83436 ? Sl 21:05 0:02 /usr/share/co
de/code --ms-enable-electron-run-as-node /home/lobinho/.vscode/extensions/kisstk
ondoros.vscode-gutter-preview-0.30.0/dist/server.js --node-ipc --clientProcessId
=9268
lobinho 9707 0.0 0.4 38123096 67140 ? Sl 21:06 0:00 /usr/share/co
de/code --ms-enable-electron-run-as-node /home/lobinho/.vscode/extensions/dbaeum
er.vscode-eslint-2.2.6/server/out/eslintServer.js --node-ipc --clientProcessId=9
268
lobinho 9779 0.6 0.6 38123096 106728 ? Sl 21:06 0:04 /usr/share/co
de/code --ms-enable-electron-run-as-node /usr/share/code/resources/app/extension
s/json-language-features/server/dist/node/jsonServerMain --node-ipc --clientProc
essId=9268
lobinho 9786 0.3 0.7 38123096 115384 ? Sl 21:06 0:03 /usr/share/co
de/code --ms-enable-electron-run-as-node --max-old-space-size=3072 /usr/share/co
de/resources/app/extensions/node_modules/typescript/lib/tsserver.js --serverMode
partialSemantic --useInferredProjectPerProjectRoot --disableAutomaticTypingAcqu
isition --cancellationPipeName /tmp/vscode-typescript1000/81366f44758492e5664f/t
scancellation-454a08d0b10736d5b794.tmp* --globalPlugins @vsintellicode/typescrip
t-intellicode-plugin,ms-vsintellicode-typescript --pluginProbeLocations /home/lo
binho/.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.28,/home/lob
inho/.vscode/extensions/visualstudioexptteam.vscodeintellicode-1.2.28 --locale p
t-br --noGetErrOnBackgroundUpdate --validateDefaultNpmLocation --useNodeIpc
lobinho 9787 1.5 1.0 38155880 165264 ? Sl 21:06 0:12 /usr/share/co
de/code --ms-enable-electron-run-as-node --max-old-space-size=3072 /usr/share/co
de/resources/app/extensions/node_modules/typescript/lib/tsserver.js --useInferre
dProjectPerProjectRoot --enableTelemetry --cancellationPipeName /tmp/vscode-type
script1000/81366f44758492e5664f/tscancellation-770db95bbb7e9ef25982.tmp* --globa
lPlugins @vsintellicode/typescript-intellicode-plugin,ms-vsintellicode-typescrip
t --pluginProbeLocations /home/lobinho/.vscode/extensions/visualstudioexptteam.v
scodeintellicode-1.2.28,/home/lobinho/.vscode/extensions/visualstudioexptteam.vs
codeintellicode-1.2.28 --locale pt-br --noGetErrOnBackgroundUpdate --validateDef
aultNpmLocation --useNodeIpc
lobinho 9815 0.0 0.5 38123096 89716 ? Sl 21:06 0:00 /usr/share/co
de/code --ms-enable-electron-run-as-node /usr/share/code/resources/app/extension
s/node_modules/typescript/lib/typingsInstaller.js --globalTypingsCacheLocation /
home/lobinho/.cache/typescript/4.8 --enableTelemetry --typesMapLocation /usr/sha
re/code/resources/app/extensions/node_modules/typescript/lib/typesMap.json --val
idateDefaultNpmLocation
lobinho 9879 0.1 0.5 48609632 83344 ? Sl 21:06 0:00 /usr/share/co
de/code --ms-enable-electron-run-as-node /home/lobinho/.vscode/extensions/visual
studioexptteam.intellicode-api-usage-examples-0.2.4/dist/server/server.js --node
-ipc --clientProcessId=9268
lobinho 10055 0.1 0.4 38123096 71628 ? Sl 21:07 0:01 /usr/share/co
de/code --ms-enable-electron-run-as-node /usr/share/code/resources/app/extension
s/markdown-language-features/server/dist/node/main --node-ipc --clientProcessId=
9268
root 10196 0.0 0.0 0 0 ? I 21:10 0:00 [kworker/u8:2
-events_unbound]
lobinho 10314 0.0 0.2 350056 48036 ? Sl 21:12 0:00 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -parentBuildID 20220923151236 -prefsL
en 32964 -prefMapSize 238647 -appDir /snap/firefox/1883/usr/lib/firefox/browser
{01fe8fbe-a3f6-48a9-bc4c-22e8b709c8f9} 7310 true rdd
root 11093 0.0 0.0 0 0 ? I 21:13 0:00 [kworker/0:2-
events]
root 11105 0.0 0.0 0 0 ? I 21:14 0:00 [kworker/2:0-
events]
root 11106 0.0 0.0 0 0 ? I 21:14 0:00 [kworker/3:0-
events]
root 11348 0.1 0.0 0 0 ? I 21:15 0:00 [kworker/1:0-
events]
lobinho 11405 0.0 0.2 217700 32968 ? Sl 21:16 0:00 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -parentBuildID 20220923151236 -sandbo
xingKind 1 -prefsLen 32964 -prefMapSize 238647 -appDir /snap/firefox/1883/usr/li
b/firefox/browser {6b22a038-2887-467c-9d78-d574f751a620} 7310 true utility
lobinho 11457 0.0 0.3 2407232 61252 ? Sl 21:16 0:00 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -childID 43 -isForBrowser -prefsLen 3
2964 -prefMapSize 238647 -jsInitLen 246848 -parentBuildID 20220923151236 -appDir
/snap/firefox/1883/usr/lib/firefox/browser {a9b76580-43e0-4fda-89c1-7fac7c704ba
3} 7310 true tab
lobinho 11507 0.0 0.3 2407236 61664 ? Sl 21:16 0:00 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -childID 44 -isForBrowser -prefsLen 3
2964 -prefMapSize 238647 -jsInitLen 246848 -parentBuildID 20220923151236 -appDir
/snap/firefox/1883/usr/lib/firefox/browser {e473e47a-c5f6-4cda-b35a-71c27e3fb4d
d} 7310 true tab
lobinho 11564 0.0 0.3 2407228 61596 ? Sl 21:16 0:00 /snap/firefox
/1883/usr/lib/firefox/firefox -contentproc -childID 45 -isForBrowser -prefsLen 3
2964 -prefMapSize 238647 -jsInitLen 246848 -parentBuildID 20220923151236 -appDir
/snap/firefox/1883/usr/lib/firefox/browser {ff6415a7-248a-4e54-9073-0d457956a58
2} 7310 true tab
root 11672 0.0 0.0 0 0 ? I 21:16 0:00 [kworker/u8:0
-flush-8:0]
root 11675 0.0 0.0 0 0 ? I 21:16 0:00 [kworker/1:3-
events]
root 11927 0.0 0.0 0 0 ? I 21:17 0:00 [kworker/u8:4
]
lobinho 12370 0.0 0.0 12760 3524 pts/0 R+ 21:19 0:00 ps auxw
lobinho 12371 0.0 0.0 8996 2664 pts/0 S+ 21:19 0:00 more

Diagrama de estados de processos

São três os estados básicos em que um processo pode encontrar-se dentro do sistema operacional:
R - Rodando: processo está ocupando a CPU;
B - Bloqueado: o processo solicitou uma operação de E/S e espera a sua conclusão;
P - Pronto: o processo está pronto para a execução e aguarda o escalonamento.

Responda as seguintes perguntas com referência ao diagrama de estados:
a) Descreva o que é salvamento de contexto e quando isto ocorre.

-   Quando ocorre uma interrupção, o sistema precisa salvar o contexto atual do processo em execução na CPU para que possa restaurar esse contexto quando o processamento for concluído, essencialmente suspendendo o processo e, em seguida, retomando-o.

b) Por que o processo não pode passar do estado Bloqueado para o estado Rodando?

-   Processo não pode executar porque depende de recursos ainda não disponíveis (dados, algum tipo de sincronização, a liberação de algum recurso compartilhado);

-   Processo simplesmente espera o tempo passar (em estado de “sleeping”).

b) Explique qual a diferença de um sistema que opera com e sem tempo compartilhado (timesharing).

> Sistemas de Tempo Compartilhado (time-sharing)

-   Os sistemas de tempo compartilhado (time-sharing) permitem que diversos programas sejam executados a partir da divisão do tempo do processador em pequenos intervalos, denominados fatia de tempo (time-slice).

> Sistemas batch (lote)

-   Os sistemas batch ou sistemas em lote foram os primeiros sistemas multiprogramáveis a serem implementados (fim da primeira e início da segunda geração de computadores - 1960), caracterizando-se por programas armazenados em disco ou fita, que uma vez iniciados, exigem pouca ou nenhuma interação do usuário, processando de forma sequencial e contínua até o fim do serviço (job), quando então é devolvido o resultado final do processamento, produzindo uma saída em disco ou fita.

> Sistemas de Tempo Real (real-time)

-   Os sistemas de tempo real (real-time) são implementados de forma semelhante aos sistemas de tempo compartilhado. O que caracteriza a diferença entre os dois tipos de sistemas é o tempo exigido no processamento das aplicações. Enquanto em sistemas de tempo compartilhado o tempo de processamento pode variar sem comprometer as aplicações em execução, nos sistemas de tempo real os tempos de processamento devem estar dentro de limites rígidos, que devem ser obedecidos, caso contrário, poderão ocorrer problemas irreparáveis.
