// name: FUN_100445bea
// address: 100445bea

void FUN_100445bea(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0xffffffff;
  lVar4 = _CMFormatDescriptionGetExtension
                    (param_1,*(undefined8 *)
                              PTR__kCMFormatDescriptionExtension_SampleDescriptionExtensionAtoms_10082bc00
                    );
  if (lVar4 == 0) {
LAB_100445dc4:
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_1001705e9(lVar4);
    lVar6 = FUN_1001713f5();
    if (lVar5 == lVar6) {
      lVar5 = FUN_100171426(lVar4);
      if (lVar5 < 1) goto LAB_100445dc4;
      lVar6 = FUN_1001c63e1(lVar5 * 8);
      if (lVar6 == 0) {
        uVar10 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar10,0x10);
        if (cVar2 != '\0') {
          local_4a = "names != __null";
          goto LAB_100445efa;
        }
        goto LAB_100445de8;
      }
      lVar7 = FUN_1001c63e1(lVar5 * 8);
      if (lVar7 != 0) {
        FUN_1001714b1(lVar4,lVar6,lVar7);
        lVar4 = 0;
        do {
          cVar2 = FUN_100169da8(&cf_uuid,*(undefined8 *)(lVar6 + lVar4 * 8));
          if (cVar2 != '\0') {
            lVar1 = *(long *)(lVar7 + lVar4 * 8);
            if (lVar1 == 0) {
              uVar10 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar10,0x10);
              if (cVar2 != '\0') {
                local_4a = "uuidData != __null";
LAB_100445d99:
                local_4c = 0x822;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
            }
            else {
              lVar8 = FUN_1001705e9(lVar1);
              lVar9 = FUN_100170dbb();
              if (lVar8 == lVar9) {
                uVar10 = FUN_100170f3b(lVar1);
                uVar3 = FUN_100170ef7(lVar1);
                cVar2 = FUN_1005dfaac(uVar10,uVar3,param_2);
                if (cVar2 == '\0') goto LAB_100445d6f;
                break;
              }
              uVar10 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar10,0x10);
              if (cVar2 != '\0') {
                local_4a = "JRCFGetTypeID(uuidData) == JRCFDataGetTypeID()";
                goto LAB_100445d99;
              }
            }
            FUN_1001782e9(0,0);
          }
LAB_100445d6f:
          lVar4 = lVar4 + 1;
        } while (lVar4 < lVar5);
        goto LAB_100445df6;
      }
      uVar10 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar10,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "values != __null";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
    }
    else {
      uVar10 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar10,0x10);
      if (cVar2 != '\0') {
        local_4a = "JRCFGetTypeID(sampleDescriptionExtensionsDict) == JRCFDictionaryGetTypeID()";
LAB_100445efa:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_100445de8:
      lVar6 = 0;
    }
    lVar7 = 0;
    FUN_1001782e9(0,0);
  }
LAB_100445df6:
  FUN_1001c64c1(lVar6);
  FUN_1001c64c1(lVar7);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

