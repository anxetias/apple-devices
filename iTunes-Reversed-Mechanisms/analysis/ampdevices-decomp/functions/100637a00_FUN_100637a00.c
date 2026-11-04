// name: FUN_100637a00
// address: 100637a00

bool FUN_100637a00(long param_1,uint param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_22a = "itemList != nullptr";
LAB_100637b6f:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else if (param_2 < *(ushort *)(param_1 + 4)) {
    if (param_3 == (void *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_22a = "fileSpec != nullptr";
        goto LAB_100637b6f;
      }
    }
    else {
      if (*(char *)(param_1 + 0x60 + (ulong)param_2 * 0x430) == '\0') {
        lVar1 = param_1 + (ulong)param_2 * 0x430;
        if (*(char *)(lVar1 + 0x48d) == '\0') {
          iVar3 = *(int *)(lVar1 + 0x488);
          if (iVar3 == 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = "receiveItem->u.file.fileNameIndex != ((JRStringCacheIndex) 0)";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            iVar3 = *(int *)(lVar1 + 0x488);
          }
          FUN_1001de41f(param_1 + 0x10,iVar3,&local_238);
          iVar3 = FUN_10017ecc9((void *)(lVar1 + 0x68),&local_238,param_3,0);
          if ((iVar3 != -0x80) && (iVar3 != 0)) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_258 = 0x8220202;
              local_254 = "Assertion failure";
              local_24c = 0x400;
              local_24a = iVar3;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_258,0x12);
            }
          }
          bVar5 = iVar3 == 0;
        }
        else {
          _memcpy(param_3,(void *)(lVar1 + 0x68),0x420);
          bVar5 = true;
        }
        goto LAB_100637b9f;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_22a = "receiveItem->isURL == false";
        goto LAB_100637b6f;
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_22a = "specIndex < itemList->numItems";
      goto LAB_100637b6f;
    }
  }
  bVar5 = false;
  FUN_1001782e9(0,0);
LAB_100637b9f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

