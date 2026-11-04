// name: FUN_100333382
// address: 100333382

ulong FUN_100333382(long param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulong uVar3;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined2 local_68 [8];
  undefined2 local_58 [8];
  undefined2 local_48 [8];
  undefined2 local_38 [8];
  undefined2 local_28 [8];
  
  if (*(char *)(param_1 + 0x6abd) == '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (cVar1 == '\0') goto LAB_10033348d;
    puVar5 = local_68;
    local_68[0] = 0;
    pcVar2 = "airtraffic> canceling due to disconnect";
  }
  else {
    uVar4 = (undefined7)((ulong)param_1 >> 8);
    if (*(char *)(param_1 + 0x6acc) == '\0') {
      if (*(char *)(param_1 + 0x16849) == '\0') {
        if (*(int *)(param_1 + 0x166d4) != 2) {
          if (*(long *)(param_1 + 0x6750) != 0) {
            cVar1 = FUN_100529831();
            if (cVar1 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar6 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              uVar3 = CONCAT71(uVar4,1);
              if (cVar1 == '\0') goto LAB_10033348d;
              puVar5 = local_38;
              local_38[0] = 0;
              pcVar2 = "airtraffic> canceling due to progress bar stopped";
              goto LAB_10033347a;
            }
          }
          if ((*(long *)(param_1 + 0x30) != 0) &&
             ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2be0) & 0x40) != 0)) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar6 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            uVar3 = CONCAT71(uVar4,1);
            if (cVar1 == '\0') goto LAB_10033348d;
            puVar5 = local_28;
            local_28[0] = 0;
            pcVar2 = "airtraffic> canceling due to copy fiber abort";
            goto LAB_10033347a;
          }
        }
        uVar3 = 0;
        goto LAB_10033348d;
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar3 = CONCAT71(uVar4,1);
      if (cVar1 == '\0') goto LAB_10033348d;
      puVar5 = local_48;
      local_48[0] = 0;
      pcVar2 = "airtraffic> canceling due to sync operations abort";
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar3 = CONCAT71(uVar4,1);
      if (cVar1 == '\0') goto LAB_10033348d;
      puVar5 = local_58;
      local_58[0] = 0;
      pcVar2 = "airtraffic> canceling due to sync fiber abort";
    }
  }
LAB_10033347a:
  __os_log_impl(0x100000000,uVar6,1,pcVar2,puVar5,2);
LAB_10033348d:
  return uVar3 & 0xffffffff;
}

