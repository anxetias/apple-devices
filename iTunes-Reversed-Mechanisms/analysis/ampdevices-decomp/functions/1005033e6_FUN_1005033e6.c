// name: FUN_1005033e6
// address: 1005033e6

undefined8 FUN_1005033e6(undefined8 param_1,char param_2,char param_3,undefined1 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_140;
  undefined4 local_138;
  char *local_134;
  undefined2 local_12c;
  char *local_12a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de449();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_138 = 0x8220202;
      local_134 = "Assertion failure";
      local_12c = 0x822;
      local_12a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_138,0x16);
    }
    local_140 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = 0;
    if (param_2 == '\0') {
      lVar4 = lVar2 + 0x66;
    }
    local_140 = FUN_100503780(lVar2 + 0x106,lVar4,param_4);
    if (param_3 == '\0') {
      uVar3 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
      lVar4 = FUN_10017076e(local_140);
      if (0 < lVar4) {
        lVar7 = 0;
        do {
          lVar5 = FUN_10016499b(local_140,lVar7);
          if (lVar5 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_138 = 0x8220202;
              local_134 = "Assertion failure";
              local_12c = 0x822;
              local_12a = "backupDict != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_138,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else if ((((((*(char *)(lVar2 + 0x144) != '\0') &&
                      (cVar1 = FUN_100167064(lVar5,&cf_SerialNumber,&local_138,0x100), cVar1 != '\0'
                      )) && (cVar1 = FUN_1001df957(&local_138,(char *)(lVar2 + 0x144),1),
                            cVar1 != '\0')) ||
                    (((*(char *)(lVar2 + 0x6250) != '\0' &&
                      (cVar1 = FUN_100167064(lVar5,&cf_ICCID,&local_138,0x100), cVar1 != '\0')) &&
                     (cVar1 = FUN_1001df957(&local_138,(char *)(lVar2 + 0x6250),1), cVar1 != '\0')))
                    ) || (((*(char *)(lVar2 + 0x6210) != '\0' &&
                           (cVar1 = FUN_100167064(lVar5,&cf_PhoneNumber,&local_138,0x100),
                           cVar1 != '\0')) &&
                          (cVar1 = FUN_1001df957(&local_138,(char *)(lVar2 + 0x6210),1),
                          cVar1 != '\0')))) ||
                  ((((*(char *)(lVar2 + 0x62f0) != '\0' &&
                     (cVar1 = FUN_100167064(lVar5,&cf_ICCID2,&local_138,0x100), cVar1 != '\0')) &&
                    (cVar1 = FUN_1001df957(&local_138,(char *)(lVar2 + 0x62f0),1), cVar1 != '\0'))
                   || (((*(char *)(lVar2 + 0x62b0) != '\0' &&
                        (cVar1 = FUN_100167064(lVar5,&cf_PhoneNumber2,&local_138,0x100),
                        cVar1 != '\0')) &&
                       (cVar1 = FUN_1001df957(&local_138,(char *)(lVar2 + 0x62b0),1), cVar1 != '\0')
                       ))))) {
            FUN_1001709a5(uVar3,lVar5);
          }
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
      }
      FUN_10017060f(local_140);
      local_140 = uVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_140;
}

