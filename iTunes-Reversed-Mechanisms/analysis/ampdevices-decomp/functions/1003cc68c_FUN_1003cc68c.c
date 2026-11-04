// name: FUN_1003cc68c
// address: 1003cc68c

long FUN_1003cc68c(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (long *)0x0) {
    *param_3 = -1;
  }
  iVar2 = FUN_10017d489(param_2,local_258);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_100166844(*(undefined8 *)(param_1 + 0x15de8),&cf_assetOrdering);
      if (lVar3 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "assetArray != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        lVar4 = FUN_10017076e(lVar3);
        if (0 < lVar4) {
          lVar7 = 0;
          do {
            lVar5 = FUN_10016499b(lVar3,lVar7);
            if (lVar5 == 0) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "assetInfoDict != nullptr";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else {
              cVar1 = FUN_100166ce2(lVar5,&cf_relativeMediaAssetPath,&local_458);
              if (cVar1 != '\0') {
                cVar1 = FUN_1001e3edc(&local_458,local_258,1);
                if (param_3 != (long *)0x0 && cVar1 != '\0') {
                  *param_3 = lVar7;
                  goto LAB_1003cc913;
                }
                if (cVar1 != '\0') goto LAB_1003cc913;
              }
            }
            lVar7 = lVar7 + 1;
          } while (lVar4 != lVar7);
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          FUN_1001b8dfc(&local_458,local_258);
          local_54 = (char *)FUN_1001b83ae(&local_458);
          local_58 = 0x8220102;
          __os_log_impl(0x100000000,uVar6,0x10,
                        "sync> failed to find asset info dictionary for \"%{public}s\"",&local_58,
                        0xc);
          FUN_1001b7a50(&local_458);
        }
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
  }
  lVar5 = 0;
LAB_1003cc913:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}

