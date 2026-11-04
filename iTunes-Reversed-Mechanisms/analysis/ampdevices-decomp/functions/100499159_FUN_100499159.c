// name: FUN_100499159
// address: 100499159

long FUN_100499159(long param_1,uint param_2,uint param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    cVar3 = FUN_100495380(*(undefined8 *)(param_1 + 0x10));
    if (cVar3 != '\0') {
      bVar6 = 99 < param_2 - 900;
      if (bVar6 && param_2 != 5) {
        lVar4 = FUN_1004993ef(param_1,param_2,param_3,1);
        if (lVar4 != 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_4a = 
            "FindITImageInstanceByFormatAndDisplayTime(imageInfo, formatID, faceIndexOrDisplayTimeInMS, true) == nullptr"
            ;
            goto LAB_100499380;
          }
          goto LAB_10049927e;
        }
      }
      else {
        lVar4 = FUN_1004993b9(param_1,param_2,param_3 & 0xffff);
        if (lVar4 != 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_4a = 
            "FindITImageInstanceByFormatAndFaceIndex(imageInfo, formatID, static_cast<UInt16>(faceIndexOrDisplayTimeInMS)) == nullptr"
            ;
LAB_100499380:
            local_4c = 0x822;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
LAB_10049927e:
          FUN_1001782e9(0,0);
        }
      }
      lVar4 = FUN_1001c58d5(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50));
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        *(long *)(lVar4 + 8) = param_1;
        *(uint *)(lVar4 + 0x10) = param_2;
        if (bVar6 && param_2 != 5) {
          *(uint *)(lVar4 + 0x14) = param_3;
        }
        else {
          *(short *)(lVar4 + 0x47c) = (short)param_3;
        }
        FUN_1002a3c25(param_1 + 0x68,lVar4);
        *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + 1;
        lVar2 = *(long *)(param_1 + 0x10);
        piVar1 = (int *)(lVar2 + 0x40);
        *piVar1 = *piVar1 + 1;
        if (999 < param_2) {
          *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
        }
        *(undefined1 *)(lVar2 + 4) = 1;
      }
      goto LAB_1004992e8;
    }
  }
  uVar5 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar5,0x10);
  if (cVar3 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "ITImageInfoIsValid(imageInfo)";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1004992e8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

