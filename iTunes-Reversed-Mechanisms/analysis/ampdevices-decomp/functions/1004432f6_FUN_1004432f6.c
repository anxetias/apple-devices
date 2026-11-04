// name: FUN_1004432f6
// address: 1004432f6

long FUN_1004432f6(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4,
                  undefined8 *param_5,byte param_6,undefined8 *param_7)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = _CMFormatDescriptionGetExtension
                    (param_1,*(undefined8 *)
                              PTR__kCMFormatDescriptionExtension_SampleDescriptionExtensionAtoms_10082bc00
                    );
  if (lVar2 == 0) {
    lVar2 = 0;
    goto LAB_100443527;
  }
  lVar3 = FUN_1001705e9(lVar2);
  lVar4 = FUN_1001713f5();
  if (lVar3 != lVar4) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "JRCFGetTypeID(sampleDescriptionExtensionsDict) == JRCFDictionaryGetTypeID()";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100443527;
  }
  lVar3 = FUN_100171426(lVar2);
  if (lVar3 < 1) {
LAB_100443512:
    lVar4 = 0;
LAB_100443514:
    lVar5 = 0;
    lVar2 = 0;
  }
  else {
    lVar4 = FUN_1001c63e1(lVar3 * 8);
    if (lVar4 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "names != __null";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100443512;
    }
    lVar5 = FUN_1001c63e1(lVar3 * 8);
    if (lVar5 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "values != __null";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100443514;
    }
    FUN_1001714b1(lVar2,lVar4,lVar5);
    lVar2 = 0;
    lVar7 = 0;
    bVar8 = false;
    do {
      cVar1 = FUN_100169da8(param_2,*(undefined8 *)(lVar4 + lVar7 * 8));
      if (cVar1 == '\0') {
        if ((param_6 != 0) &&
           (cVar1 = FUN_100169da8(&cf_UUID,*(undefined8 *)(lVar4 + lVar7 * 8)), cVar1 != '\0')) {
          uVar6 = FUN_100170f3b(*(undefined8 *)(lVar5 + lVar7 * 8));
          cVar1 = FUN_1001c5630(uVar6,&DAT_1007403f0,0x10);
          if (cVar1 != '\0') {
            if (param_7 != (undefined8 *)0x0) {
              if ((param_4 & 1) == 0) {
                uVar6 = FUN_1001705fc(*(undefined8 *)(lVar5 + lVar7 * 8));
              }
              else {
                uVar6 = FUN_10044366a(0x55554944);
              }
              *param_7 = uVar6;
            }
            bVar8 = true;
            if (lVar2 != 0) break;
          }
        }
      }
      else {
        if (param_5 != (undefined8 *)0x0) {
          if ((param_4 & 1) == 0) {
            uVar6 = FUN_1001705fc(*(undefined8 *)(lVar5 + lVar7 * 8));
          }
          else {
            uVar6 = FUN_10044366a(param_3);
          }
          *param_5 = uVar6;
        }
        lVar2 = 1;
        if (bVar8 || ((param_6 ^ 1) & 1) != 0) break;
        bVar8 = false;
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
  }
  FUN_1001c64c1(lVar4);
  FUN_1001c64c1(lVar5);
LAB_100443527:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar2;
}

