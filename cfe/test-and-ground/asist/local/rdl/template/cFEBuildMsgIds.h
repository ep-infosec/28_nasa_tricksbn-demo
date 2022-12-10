cFE Build Message Id's    June 25, 2008

/* cFE Global Command MsgIds (Same MsgId on each processor) */
CFE_TIME_DATA_CMD_MID  0x1860   96
CFE_TIME_FAKE_CMD_MID  0x1861   97
CFE_TIME_SEND_CMD_MID  0x1862   98

CPU1 - Processor 1

/* cFE Command MsgIds for CPU1 - Processor 1 */
CFE_EVS_CMD_MID        0x1801   01
CFE_FS_CMD_MID         0x1802   02
CFE_SB_CMD_MID         0x1803   03
CFE_TBL_CMD_MID        0x1804   04
CFE_TIME_CMD_MID       0x1805   05
CFE_ES_CMD_MID         0x1806   06
CFE_ES_SEND_HK_MID     0x1808   08
CFE_EVS_SEND_HK_MID    0x1809   09
CFE_FS_SEND_HK_MID     0x180A   10
CFE_SB_SEND_HK_MID     0x180B   11
CFE_TBL_SEND_HK_MID    0x180C   12
CFE_TIME_SEND_HK_MID   0x180D   13
CFE_TIME_TONE_CMD_MID  0x1810   16
CFE_TIME_1HZ_CMD_MID   0x1811   17

/* CFE Telemetry MsgIds for CPU1 - Processor 1 */
CFE_ES_HK_TLM_MID      0x0800   00
CFE_EVS_HK_TLM_MID     0x0801   01
CFE_FS_HK_TLM_MID      0x0802   02
CFE_SB_HK_TLM_MID      0x0803   03
CFE_TBL_HK_TLM_MID     0x0804   04
CFE_TIME_HK_TLM_MID    0x0805   05
CFE_TIME_DIAG_TLM_MID  0X0806   06
CFE_EVS_EVENT_MSG_MID  0x0808   08
CFE_SB_STATS_TLM_MID   0x080A   10
CFE_ES_APP_TLM_MID     0x080B   11
CFE_TBL_REG_TLM_MID    0x080C   12
CFE_ES_MEMSTATS_TLM_MID 0x0810   16

/* File MsgIds for CPU1 - Processor 1 */
CFE_EVS_LOG_MID        0x0F00   3840
CFE_EVS_APP_MID        0x0F01   3841
CFE_SB_ROUTE_MID       0x0F02   3842
CFE_SB_PIPE_MID        0x0F03   3843
CFE_SB_MSGMAP_MID      0x0F04   3844
CFE_ES_APPLOG_MID      0x0F05   3845
CFE_TBL_REGISTRY_MID   0x0F06   3846
CFE_TBL_WRITE_MID      0x0F07   3847
CFE_ES_ERLOG_MID       0x0F08   3848
CFE_ES_CDSREG_MID      0x0F09   3849
CFE_ES_TASKLOG_MID     0x0F0A   3850

/* Application Command MsgIds for CPU1 - Processor 1 */
CFE_TO_CMD_MID         0x1880   128
CFE_TO_SEND_HK_MID     0x1881   129
CFE_CI_CMD_MID         0x1884   132
CFE_CI_SEND_HK_MID     0x1885   133

/* Test Application Command MsgIds for CPU1 - Processor 1 */
CFE_TST_EVS_CMD_MID    0x1900   256
CFE_TST_TIME_CMD_MID   0x1903   259
CFE_TST_TIME_SEND_HK_CMD_MID 0x1904   260
CFE_TST_SB_CMD_MID     0x1907   263
CFE_TST_TBL_CMD_MID    0x190B   267
CFE_TST_TBL2_CMD_MID   0x190F   271
CFE_TST_ES_CMD_MID     0x1913   275

/* Application Telemetry MsgIds for CPU1 - Processor 1 */
CFE_TO_HK_TLM_MID      0x0880   128
CFE_TO_DATA_TYPES_MID  0x0881   129
CFE_CI_HK_TLM_MID      0x0884   132

/* Test Application Telemetry MsgIDs for CPU1 - Processor 1 */
CFE_TST_SB_HK_TLM_MID          0x0900   256
CFE_TST_SB_PIPE0_TLM_MID       0x0901   257
CFE_TST_TBL_HK_TLM_MID         0x0904   260
CFE_TST_TBL_MAXTBLST_TLM_MID   0x0905   261
CFE_TST_TBL_INFO_TLM_MID       0x0906   262
CFE_TST_TBL2_HK_TLM_MID        0x0909   265
CFE_TST_TBL2_MAXTBLST_TLM_MID  0x090A   266
CFE_TST_ES_HK_TLM_MID          0x090D   269
CFE_TST_TIME_HK_TLM_MID        0x0913   275
CFE_TST_TIME_TAI_TLM_MID       0x0914   276
CFE_TST_TIME_UTC_TLM_MID       0x0915   277
CFE_TST_TIME_ST_TLM_MID        0x0916   278
CFE_TST_TIME_MET_TLM_MID       0x0917   279
CFE_TST_TIME_METSEC_TLM_MID    0x0918   280
CFE_TST_TIME_METSSUB_TLM_MID   0x0919   281
CFE_TST_TIME_STCF_TLM_MID      0x091A   282
CFE_TST_TIME_LPSEC_TLM_MID     0x091B   283
CFE_TST_TIME_CLKST_TLM_MID     0x091C   284
CFE_TST_TIME_ADD_TLM_MID       0x091D   285
CFE_TST_TIME_SUBTIME_TLM_MID   0x091E   286
CFE_TST_TIME_COMP_TLM_MID      0x091F   287
CFE_TST_TIME_SUBMICRO_TLM_MID  0x0920   288
CFE_TST_TIME_MICROSUB_TLM_MID  0x0921   289

/* Application Table MsgIds for CPU1 - Processor 1 */
CFE_TST_TBL_TABLE1_MID         0x0FA2   4002
CFE_TST_TBL_TABLE2_MID         0x0FA3   4003
CFE_TST_ES_TABLE1_MID          0x0FA4   4004
CFE_TST_ES_TABLE2_MID          0x0FA5   4005

CPU2 - Processor 2

/* cFE Command MsgIds for CPU2 - Processor 2 */
CFE_EVS_CMD_MID        0x1821   33
CFE_FS_CMD_MID         0x1822   34
CFE_SB_CMD_MID         0x1823   35
CFE_TBL_CMD_MID        0x1824   36
CFE_TIME_CMD_MID       0x1825   37
CFE_ES_CMD_MID         0x1826   38
CFE_EVS_SEND_HK_MID    0x1829   41
CFE_FS_SEND_HK_MID     0x182A   42
CFE_SB_SEND_HK_MID     0x182B   43
CFE_TBL_SEND_HK_MID    0x182C   44
CFE_TIME_SEND_HK_MID   0x182D   45
CFE_TIME_TONE_CMD_MID  0x1830   48
CFE_TIME_1HZ_CMD_MID   0x1831   49

/* CFE Telemetry MsgIds for CPU2 - Processor 2 */
CFE_ES_HK_TLM_MID      0x0820   32
CFE_EVS_HK_TLM_MID     0x0821   33
CFE_FS_HK_TLM_MID      0x0822   34
CFE_SB_HK_TLM_MID      0x0823   35
CFE_TBL_HK_TLM_MID     0x0824   36
CFE_TIME_HK_TLM_MID    0x0825   37
CFE_TIME_DIAG_TLM_MID  0X0826   38
CFE_EVS_EVENT_MSG_MID  0x0828   40
CFE_SB_NETWORK_TLM_MID 0x0829   41
CFE_SB_STATS_TLM_MID   0x082A   42
CFE_ES_APP_TLM_MID     0x082B   43
CFE_TBL_REG_TLM_MID    0x082C   44
CFE_ES_MEMSTATS_TLM_MID 0x0830   48

/* CFE File MsgIds for CPU2 - Processor 2 */
CFE_EVS_LOG_MID        0x0F20   3872
CFE_EVS_APP_MID        0x0F21   3873
CFE_SB_ROUTE_MID       0x0F22   3874
CFE_SB_PIPE_MID        0x0F23   3875
CFE_SB_MSGMAP_MID      0x0F24   3876
CFE_ES_APPLOG_MID      0x0F25   3877
CFE_TBL_REGISTRY_MID   0x0F26   3878
CFE_TBL_WRITE_MID      0x0F27   3879
CFE_ES_ERLOG_MID       0x0F28   3880
CFE_ES_CDSREG_MID      0x0F29   3881
CFE_ES_TASKLOG_MID     0x0F2A   3882

/* Application Command MsgIds for CPU2 - Processor 2 */
TO_CMD_MID             0x1980   384
TO_SEND_HK_MID         0x1981   385
CI_CMD_MID             0x1984   388
CI_SEND_HK_MID         0x1985   389

/* Test Application Command MsgIds for CPU2 - Processor 2 */
CFE_TST_EVS_CMD_MID    0x1A00   512
CFE_TST_TIME_CMD_MID   0x1A03   515
CFE_TST_TIME_SEND_HK_CMD_MID 0x1A04   516
CFE_TST_SB_CMD_MID     0x1A07   519
CFE_TST_TBL_CMD_MID    0x1A0B   523
CFE_TST_TBL2_CMD_MID   0x1A0F   527
CFE_TST_ES_CMD_MID     0x1A13   531

/* Application Telemetry MsgIds for CPU2 - Processor 2 */
TO_HK_TLM_MID          0x0980   384
TO_DATA_TYPES_MID      0x0981   385
CI_HK_TLM_MID          0x0984   388

/* Test Application Telemetry MsgIDs for CPU2 - Processor 2 */
CFE_TST_SB_HK_TLM_MID          0x0A00   512
CFE_TST_SB_PIPE0_TLM_MID       0x0A01   513
CFE_TST_TBL_HK_TLM_MID         0x0A04   516
CFE_TST_TBL_MAXTBLST_TLM_MID   0x0A05   517
CFE_TST_TBL_INFO_TLM_MID       0x0A06   518
CFE_TST_TBL2_HK_TLM_MID        0x0A09   521
CFE_TST_TBL2_MAXTBLST_TLM_MID  0x0A0A   522
CFE_TST_ES_HK_TLM_MID          0x0A0D   525
CFE_TST_TIME_HK_TLM_MID        0x0A13   531
CFE_TST_TIME_TAI_TLM_MID       0x0A14   532
CFE_TST_TIME_UTC_TLM_MID       0x0A15   533
CFE_TST_TIME_ST_TLM_MID        0x0A16   534
CFE_TST_TIME_MET_TLM_MID       0x0A17   535
CFE_TST_TIME_METSEC_TLM_MID    0x0A18   536
CFE_TST_TIME_METSSUB_TLM_MID   0x0A19   537
CFE_TST_TIME_STCF_TLM_MID      0x0A1A   538
CFE_TST_TIME_LPSEC_TLM_MID     0x0A1B   539
CFE_TST_TIME_CLKST_TLM_MID     0x0A1C   540
CFE_TST_TIME_ADD_TLM_MID       0x0A1D   541
CFE_TST_TIME_SUBTIME_TLM_MID   0x0A1E   542
CFE_TST_TIME_COMP_TLM_MID      0x0A1F   543
CFE_TST_TIME_SUBMICRO_TLM_MID  0x0A20   544
CFE_TST_TIME_MICROSUB_TLM_MID  0x0A21   545

/* Application Table MsgIds for CPU2 - Processor 2 */
CFE_TST_TBL_TABLE1_MID         0x0FC0   4032
CFE_TST_TBL_TABLE2_MID         0x0FC1   4033
CFE_TST_ES_TABLE1_MID          0x0FC2   4034
CFE_TST_ES_TABLE2_MID          0x0FC3   4035

CPU3 - Processor 3

/* cFE Command MsgIds for CPU3 - Processor 3 */
CFE_EVS_CMD_MID        0x1841   65
CFE_FS_CMD_MID         0x1842   66
CFE_SB_CMD_MID         0x1843   67
CFE_TBL_CMD_MID        0x1844   68
CFE_TIME_CMD_MID       0x1845   69
CFE_ES_CMD_MID         0x1846   70
CFE_EVS_SEND_HK_MID    0x1849   73
CFE_FS_SEND_HK_MID     0x184A   74
CFE_SB_SEND_HK_MID     0x184B   75
CFE_TBL_SEND_HK_MID    0x184C   76
CFE_TIME_SEND_HK_MID   0x184D   77
CFE_TIME_TONE_CMD_MID  0x1850   80
CFE_TIME_1HZ_CMD_MID   0x1851   81

/* CFE Telemetry MsgIds for CPU3 - Processor 3 */
CFE_ES_HK_TLM_MID      0x0840   64
CFE_EVS_HK_TLM_MID     0x0841   65
CFE_FS_HK_TLM_MID      0x0842   66
CFE_SB_HK_TLM_MID      0x0843   67
CFE_TBL_HK_TLM_MID     0x0844   68
CFE_TIME_HK_TLM_MID    0x0845   69
CFE_TIME_DIAG_TLM_MID  0X0846   70
CFE_EVS_EVENT_MSG_MID  0x0848   72
CFE_SB_NETWORK_TLM_MID 0x0849   73
CFE_SB_STATS_TLM_MID   0x084A   74
CFE_ES_APP_TLM_MID     0x084B   75
CFE_TBL_REG_TLM_MID    0x084C   76
CFE_ES_MEMSTATS_TLM_MID 0x0850   80

/* CFE File MsgIds for CPU3 - Processor 3 */
CFE_EVS_LOG_MID        0x0F40   3904
CFE_EVS_APP_MID        0x0F41   3905
CFE_SB_ROUTE_MID       0x0F42   3906
CFE_SB_PIPE_MID        0x0F43   3907
CFE_SB_MSGMAP_MID      0x0F44   3908
CFE_ES_APPLOG_MID      0x0F45   3909
CFE_TBL_REGISTRY_MID   0x0F46   3910
CFE_TBL_WRITE_MID      0x0F47   3911
CFE_ES_ERLOG_MID       0x0F48   3912
CFE_ES_CDSREG_MID      0x0F49   3913
CFE_ES_TASKLOG_MID     0x0F4A   3914

/* Application Command MsgIds for CPU3 - Processor 3 */
TO_CMD_MID             0x1A80   640
TO_SEND_HK_MID         0x1A81   641
CI_CMD_MID             0x1A84   644
CI_SEND_HK_MID         0x1A85   645

CFE_TST_EVS_CMD_MID    0x1B00   768
CFE_TST_TIME_CMD_MID   0x1B03   771
CFE_TST_TIME_SEND_HK_CMD_MID 0x1B04   772
CFE_TST_SB_CMD_MID     0x1B07   775
CFE_TST_TBL_CMD_MID    0x1B0B   779
CFE_TST_TBL2_CMD_MID   0x1B0F   783
CFE_TST_ES_CMD_MID     0x1B13   787

/* Application Telemetry MsgIds for CPU3 - Processor 3 */
TO_HK_TLM_MID          0x0A80   640
TO_DATA_TYPES_MID      0x0A81   641
CI_HK_TLM_MID          0x0A84   644

/* Test Application Telemetry MsgIDs for CPU3 - Processor 3 */
CFE_TST_SB_HK_TLM_MID          0x0B00   768
CFE_TST_SB_PIPE0_TLM_MID       0x0B01   769
CFE_TST_TBL_HK_TLM_MID         0x0B04   772
CFE_TST_TBL_MAXTBLST_TLM_MID   0x0B05   773
CFE_TST_TBL_INFO_TLM_MID       0x0B06   774
CFE_TST_TBL2_HK_TLM_MID        0x0B09   777
CFE_TST_TBL2_MAXTBLST_TLM_MID  0x0B0A   778
CFE_TST_ES_HK_TLM_MID          0x0B0D   781
CFE_TST_TIME_HK_TLM_MID        0x0B13   787
CFE_TST_TIME_TAI_TLM_MID       0x0B14   788
CFE_TST_TIME_UTC_TLM_MID       0x0B15   789
CFE_TST_TIME_ST_TLM_MID        0x0B16   790
CFE_TST_TIME_MET_TLM_MID       0x0B17   791
CFE_TST_TIME_METSEC_TLM_MID    0x0B18   792
CFE_TST_TIME_METSSUB_TLM_MID   0x0B19   793
CFE_TST_TIME_STCF_TLM_MID      0x0B1A   794
CFE_TST_TIME_LPSEC_TLM_MID     0x0B1B   795
CFE_TST_TIME_CLKST_TLM_MID     0x0B1C   796
CFE_TST_TIME_ADD_TLM_MID       0x0B1D   797
CFE_TST_TIME_SUBTIME_TLM_MID   0x0B1E   798
CFE_TST_TIME_COMP_TLM_MID      0x0B1F   799
CFE_TST_TIME_SUBMICRO_TLM_MID  0x0B20   800
CFE_TST_TIME_MICROSUB_TLM_MID  0x0B21   801

/* Application Table MsgIds for CPU3 - Processor 3 */
CFE_TST_TBL_TABLE1_MID         0x0FE0   4064
CFE_TST_TBL_TABLE2_MID         0x0FE1   4065
CFE_TST_ES_TABLE1_MID          0x0FE2   4066
CFE_TST_ES_TABLE2_MID          0x0FE3   4067
