// name: FUN_1003d12b3
// address: 1003d12b3

int FUN_1003d12b3(long param_1,char param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = *(uint *)(param_1 + 0x4570);
  if (*(char *)(param_1 + 0x456c) == '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData->deviceInfo.imageFormatList.totalFixedFormatSizeOnDiskIsValid";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_10029af0c(param_1 + 0x4560);
  iVar9 = *(int *)(param_1 + 0x4564);
  if ((*(char *)(param_1 + 0x456d) == '\x01') && (*(char *)(param_3 + 0xd7) == '\0')) {
    if ((*(char *)(*(long *)(param_3 + 0x10) + 0x143c) == '\0') &&
       ((*(char *)(param_3 + 0x80) != '\x06' && (*(char *)(param_3 + 0x80) != '\0')))) {
      if ((ulong)uVar2 == 0) {
        iVar8 = 0;
      }
      else {
        lVar6 = 0;
        iVar8 = 0;
        do {
          if ((*(char *)(param_1 + 0x45ab + lVar6) == '\0') &&
             (*(char *)(param_1 + 0x4584 + lVar6) != '\0')) {
            lVar7 = FUN_1004993ef(param_3,1,0,1);
            if (lVar7 == 0) break;
            lVar1 = param_1 + 0x4588 + lVar6;
            if ((*(double *)(lVar7 + 0x28) != DAT_100701af0) ||
               (NAN(*(double *)(lVar7 + 0x28)) || NAN(DAT_100701af0))) {
              if ((*(double *)(lVar7 + 0x30) == DAT_100701af0) &&
                 (!NAN(*(double *)(lVar7 + 0x30)) && !NAN(DAT_100701af0))) goto LAB_1003d1586;
              FUN_1002395cb(lVar1);
              uVar4 = FUN_100239730(lVar1);
              if (uVar4 == 0) goto LAB_1003d1586;
            }
            else {
LAB_1003d1586:
              uVar4 = FUN_100239983(lVar1,1,0);
              uVar4 = uVar4 / 3;
            }
            iVar8 = uVar4 + iVar8;
          }
          lVar6 = lVar6 + 0x78;
        } while ((ulong)uVar2 * 0x78 - lVar6 != 0);
      }
      uVar2 = *(uint *)(param_1 + 0x6f60);
      iVar9 = (iVar9 - ((iVar8 + uVar2) - 1) % uVar2) + uVar2 + iVar8 + -1;
    }
    else {
      lVar6 = FUN_1004968c5(param_3);
      while (lVar6 != 0) {
        if (((*(char *)(lVar6 + 0x52) != '\0') && (899 < *(uint *)(lVar6 + 0x10))) &&
           ((ulong)*(uint *)(param_1 + 0x4570) != 0)) {
          lVar7 = 0;
          do {
            if (*(uint *)(param_1 + 0x4578 + lVar7) == *(uint *)(lVar6 + 0x10)) {
              iVar8 = *(int *)(lVar6 + 0x3c) + *(uint *)(param_1 + 0x6f60);
              iVar9 = (iVar9 - (iVar8 - 1U) % *(uint *)(param_1 + 0x6f60)) + iVar8 + -1;
              break;
            }
            lVar7 = lVar7 + 0x78;
          } while ((ulong)*(uint *)(param_1 + 0x4570) * 0x78 - lVar7 != 0);
        }
        lVar6 = FUN_100496985();
      }
    }
  }
  lVar6 = FUN_1004993ef(param_3,4,0,1);
  if ((lVar6 != 0) ||
     (((param_2 != '\0' || (*(char *)(param_3 + 0xd7) == '\x01')) &&
      (lVar6 = FUN_1004993ef(param_3,1,0,1), lVar6 != 0)))) {
    iVar8 = *(int *)(lVar6 + 0x40) + *(uint *)(param_1 + 0x6f60);
    iVar9 = (iVar9 - (iVar8 - 1U) % *(uint *)(param_1 + 0x6f60)) + iVar8 + -1;
  }
  if ((*(char *)(param_1 + 0x341) != '\0') && (lVar6 = FUN_1004993ef(param_3,7,0,1), lVar6 != 0)) {
    iVar8 = *(int *)(lVar6 + 0x40) + *(uint *)(param_1 + 0x6f60);
    iVar9 = (iVar9 - (iVar8 - 1U) % *(uint *)(param_1 + 0x6f60)) + iVar8 + -1;
  }
  if ((*(char *)(param_1 + 0x343) != '\0') && (lVar6 = FUN_1004993ef(param_3,8,0,1), lVar6 != 0)) {
    iVar8 = *(int *)(lVar6 + 0x40) + *(uint *)(param_1 + 0x6f60);
    iVar9 = (iVar9 - (iVar8 - 1U) % *(uint *)(param_1 + 0x6f60)) + iVar8 + -1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

