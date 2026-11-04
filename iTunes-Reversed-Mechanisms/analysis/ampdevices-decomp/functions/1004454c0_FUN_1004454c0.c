// name: FUN_1004454c0
// address: 1004454c0

void FUN_1004454c0(long param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    lVar2 = FUN_10017076e();
    if (0 < lVar2) {
LAB_100445500:
      lVar5 = 0;
      do {
        lVar3 = FUN_100170853(param_1,lVar5);
        if (lVar3 != 0) {
          uVar4 = _AVCFMetadataItemCopyKey(lVar3);
          cVar1 = FUN_100170633(param_2,uVar4);
          FUN_10017060f(uVar4);
          if (cVar1 != '\0') goto LAB_100445542;
        }
        lVar5 = lVar5 + 1;
        if (lVar2 == lVar5) break;
      } while( true );
    }
LAB_10044555d:
    if ((param_3 == (short *)0x0) || (*param_3 == 0)) {
      lVar2 = 0;
    }
    else {
      lVar5 = _AVCFMetadataItemCreateMutable(DAT_1008c4d90);
      if (lVar5 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "metaDataItem != __null";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        lVar2 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        lVar2 = FUN_1001e5b1d(param_3);
        if (lVar2 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "valueString != __null";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          _AVCFMetadataItemSetKey(lVar5,param_2);
          _AVCFMetadataItemSetValue(lVar5,lVar2);
        }
        _CFRelease(lVar5);
      }
    }
    FUN_10017060f(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
LAB_100445542:
  FUN_100170bed(param_1,lVar5);
  lVar2 = FUN_10017076e(param_1);
  if (lVar2 < 1) goto LAB_10044555d;
  goto LAB_100445500;
}

