// name: FUN_100340841
// address: 100340841

undefined8
FUN_100340841(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_48;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = 0;
  *param_5 = 0;
  cVar1 = FUN_100170633(param_1,&cf_Media);
  if (((cVar1 != '\0') || (cVar1 = FUN_100170633(param_1,&cf_Ringtone), cVar1 != '\0')) ||
     (cVar1 = FUN_100170633(param_1,&cf_VoiceMemo), cVar1 != '\0')) {
    cVar1 = FUN_100340ac2(param_2,param_3,param_4,param_5);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_100340927;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "airtraffic> unable to parse asset identifier \"%{public}@\"";
      local_44 = param_2;
      goto LAB_100340915;
    }
    goto LAB_100340925;
  }
  cVar1 = FUN_100170633(param_1,&cf_Book);
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(param_1,&cf_Application);
    if (cVar1 == '\0') {
      cVar1 = FUN_100170633(param_1,&cf_Photo);
      if (cVar1 == '\0') {
        cVar1 = FUN_100170633(param_1,&cf_Data);
        if (cVar1 == '\0') {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar2 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 != '\0') {
            pcVar3 = "airtraffic> unknown dataclass %{public}@";
            local_44 = param_1;
LAB_100340915:
            local_48 = 0x8420102;
            __os_log_impl(0x100000000,uVar2,0x10,pcVar3,&local_48,0xc);
          }
        }
        else {
          cVar1 = FUN_100170633(param_2,&cf_com_apple_antiphishing_db);
          if (cVar1 != '\0') {
            *param_4 = 8;
            goto LAB_1003409a8;
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar2 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 != '\0') {
            pcVar3 = "airtraffic> unknown data asset identifier \"%{public}@\"";
            local_44 = param_2;
            goto LAB_100340915;
          }
        }
LAB_100340925:
        uVar2 = 0;
        goto LAB_100340927;
      }
      *param_4 = 7;
    }
    else {
      *param_4 = 1;
    }
  }
  else {
    *param_4 = 2;
    uVar2 = FUN_1001e110c(param_2);
    *param_5 = uVar2;
  }
LAB_1003409a8:
  uVar2 = 1;
LAB_100340927:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

