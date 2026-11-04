// name: FUN_1003d5593
// address: 1003d5593

int FUN_1003d5593(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  long *local_490;
  long local_488;
  long lStack_480;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_490 = &local_488;
  local_488 = 0;
  lStack_480 = 0;
  if (*(long *)(param_1 + 0x66b8) == 0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData->iPodPhotoLibrary != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar3 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x70696374,0,local_478)
    ;
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        FUN_100496791(*(undefined8 *)(param_1 + 0x66b8));
        lVar5 = FUN_100496019(*(undefined8 *)(param_1 + 0x66b8));
        for (; lVar5 != 0; lVar5 = FUN_1004960d0(lVar5)) {
          for (lVar6 = FUN_1004968c5(lVar5); lVar6 != 0; lVar6 = FUN_100496985(lVar6)) {
            if (899 < *(uint *)(lVar6 + 0x10)) {
              if ((ulong)*(uint *)(param_1 + 0x4570) != 0) {
                lVar10 = 0;
                do {
                  if (*(uint *)(param_1 + 0x4578 + lVar10) == *(uint *)(lVar6 + 0x10))
                  goto LAB_1003d568c;
                  lVar10 = lVar10 + 0x78;
                } while ((ulong)*(uint *)(param_1 + 0x4570) * 0x78 - lVar10 != 0);
              }
              *(undefined1 *)(lVar6 + 0x50) = 1;
              FUN_1002c33aa(&local_490,lVar6 + 0x10);
            }
LAB_1003d568c:
          }
        }
        iVar3 = FUN_100591f64(*(undefined8 *)(param_1 + 0x66b8),local_478,1,0x64656c70,param_2);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            if (local_490 != &local_488) {
              plVar8 = local_490;
              do {
                iVar4 = *(int *)((long)plVar8 + 0x1c);
                for (puVar7 = (undefined8 *)FUN_100495ce0(*(undefined8 *)(param_1 + 0x66b8));
                    puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
                  if (*(int *)(puVar7 + 2) == iVar4) {
                    FUN_100496dcc(puVar7);
                    goto LAB_1003d57d8;
                  }
                }
                uVar9 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar9,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "imageFormatInfo != nullptr";
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
LAB_1003d57d8:
                plVar1 = (long *)plVar8[1];
                plVar11 = plVar8;
                if ((long *)plVar8[1] == (long *)0x0) {
                  do {
                    plVar8 = (long *)plVar11[2];
                    bVar12 = (long *)*plVar8 != plVar11;
                    plVar11 = plVar8;
                  } while (bVar12);
                }
                else {
                  do {
                    plVar8 = plVar1;
                    plVar1 = (long *)*plVar8;
                  } while ((long *)*plVar8 != (long *)0x0);
                }
              } while (plVar8 != &local_488);
            }
          }
          else {
            uVar9 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar9,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        FUN_100496791(*(undefined8 *)(param_1 + 0x66b8));
        if (((lStack_480 == 0) || (iVar4 = FUN_1004f348c(param_1), iVar4 == -0x80)) || (iVar4 == 0))
        goto LAB_1003d58bc;
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 == '\0') goto LAB_1003d58bc;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 == '\0') goto LAB_1003d58bc;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      }
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_1003d58bc:
  FUN_1002a41f4(&local_490,local_488);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

