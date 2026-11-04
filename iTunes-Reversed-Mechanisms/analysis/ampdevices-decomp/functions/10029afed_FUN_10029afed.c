// name: FUN_10029afed
// address: 10029afed

void FUN_10029afed(undefined8 param_1,undefined4 param_2,int *param_3,long param_4,
                  undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  int *local_78;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = param_2;
  local_5c = param_5;
  if (param_4 != 0 && (char)param_2 == '\0') {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "formatDescriptionList == nullptr || markSourceFaceThumbs";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  local_64 = 0;
  if (param_3 == (int *)0x0) {
    local_78 = &local_64;
  }
  else {
    *param_3 = 0;
    local_78 = param_3;
  }
  lVar4 = FUN_100496392(param_1);
  do {
    if (lVar4 == 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (((*(char *)(lVar4 + 0x11) == '\x0f') && (*(int *)(lVar4 + 0xbc) != 0)) &&
       (*(int *)(lVar4 + 0x94) != 0)) {
      lVar5 = FUN_1004983e2(param_1);
      if (lVar5 == 0) {
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_4a = "keyPhotoImageInfo != nullptr";
LAB_10029b24b:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_10029b175:
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        FUN_1001782e9(0,0);
      }
      else if ((*(int *)(lVar5 + 0xa4) != 0) && (*(char *)(lVar5 + 0xd7) == '\0')) {
        lVar6 = FUN_1004993b9(lVar5,5,*(undefined2 *)(lVar4 + 0xa8));
        if (lVar6 == 0) {
          uVar3 = FUN_1001cc310();
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            local_4a = "keySourceFaceThumbImageInstance != nullptr";
            goto LAB_10029b24b;
          }
          goto LAB_10029b175;
        }
        *local_78 = *local_78 + 1;
        for (lVar7 = FUN_1004968c5(lVar5); lVar7 != 0; lVar7 = FUN_100496985(lVar7)) {
          if ((0xffffff9b < *(int *)(lVar7 + 0x10) - 1000U) &&
             (*(short *)(lVar7 + 0x47c) == *(short *)(lVar4 + 0xa8))) {
            *(undefined4 *)(lVar7 + 0x480) = 1;
          }
        }
        if ((((char)local_60 != '\0') && (*(int *)(lVar6 + 0x480) == 0)) &&
           (*(undefined4 *)(lVar6 + 0x480) = 1, param_4 != 0)) {
          cVar2 = FUN_10029b39e(lVar5);
          bVar8 = *(byte *)(lVar5 + 0x80);
          uVar9 = (uint)bVar8;
          if (cVar2 == '\0') {
            uVar1 = (uint)bVar8;
            if (2 < uVar1 - 1) {
              if (uVar1 == 0) goto LAB_10029b298;
              if (uVar1 != 5) goto LAB_10029b28d;
            }
LAB_10029b2ab:
            if ((byte)uVar9 < 7) {
              if ((0x49U >> (uVar9 & 0x1f) & 1) != 0) goto LAB_10029b2c1;
              if ((6U >> (uVar9 & 0x1f) & 1) != 0) goto LAB_10029b2f1;
            }
          }
          else {
            if (bVar8 == 0) {
LAB_10029b298:
              cVar2 = FUN_10029b39e(lVar5);
              bVar8 = *(byte *)(lVar5 + 0x80);
              uVar9 = (uint)bVar8;
              if (cVar2 == '\0') goto LAB_10029b2ab;
            }
LAB_10029b28d:
            if (bVar8 == 6) {
LAB_10029b2c1:
              cVar2 = FUN_10029b49d(lVar6,param_4,local_5c,0);
              if (cVar2 != '\0') {
                uVar9 = (uint)*(byte *)(lVar5 + 0x80);
LAB_10029b2f1:
                if (((char)uVar9 == '\x06') || (uVar9 == 0)) {
                  *(undefined1 *)(lVar5 + 0x80) = 3;
                }
                *(byte *)(lVar5 + 0xb3) = *(byte *)(lVar5 + 0xb3) | 2;
                *(short *)(lVar5 + 0x70) = *(short *)(lVar5 + 0x70) + 1;
                *(int *)(lVar5 + 0xa0) = *(int *)(lVar5 + 0xa0) + 1;
              }
            }
          }
        }
      }
    }
    lVar4 = FUN_100496449(lVar4);
  } while( true );
}

