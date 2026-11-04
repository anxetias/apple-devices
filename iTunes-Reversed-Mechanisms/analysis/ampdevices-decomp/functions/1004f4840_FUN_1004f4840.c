// name: FUN_1004f4840
// address: 1004f4840

int FUN_1004f4840(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 uStack_36;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x6610;
      uStack_38 = 0x7d;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1004f49ac;
  }
  lVar3 = FUN_1004de449();
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      pcVar6 = "handlerData != nullptr";
LAB_1004f4b10:
      uStack_3c = 0x822;
      local_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      uStack_3a = SUB82(pcVar6,0);
      uStack_38 = (undefined2)((ulong)pcVar6 >> 0x10);
      uStack_36 = (undefined4)((ulong)pcVar6 >> 0x20);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(char *)(lVar3 + 0x14cd8) != '\0') {
      cVar1 = FUN_1004e7efc(lVar3);
      if (cVar1 == '\0') {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          local_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0x664a;
          uStack_38 = 0x7d;
          uStack_36 = 1;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = 0x48c;
      }
      else {
        iVar2 = FUN_1004dccf5(lVar3,"");
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            lVar4 = FUN_10048604a(*(undefined8 *)(lVar3 + 0x30));
            if (lVar4 == 0) {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_48 = 0x8220202;
                uStack_44 = 0x7a0a90;
                local_40 = 1;
                uStack_3c = 0x822;
                uStack_3a = 0x8d24;
                uStack_38 = 0x7b;
                uStack_36 = 1;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              iVar2 = -0x32;
            }
            else {
              local_48 = (undefined4)*(undefined8 *)(lVar4 + 0x78);
              uStack_44 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x78) >> 0x20);
              local_40 = 0xffffffff;
              uStack_3c = 0xffff;
              uStack_3a = 0xffff;
              uVar5 = FUN_1004f465d(param_2);
              iVar2 = FUN_100639cd4(lVar4,uVar5,0,&local_48);
              FUN_1002c38bf(uVar5);
            }
            FUN_1004dd69c(lVar3,"");
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              uStack_44 = 0x7a0a90;
              local_40 = 1;
              uStack_3c = 0x400;
              uStack_3a = (undefined2)iVar2;
              uStack_38 = (undefined2)((uint)iVar2 >> 0x10);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
        }
      }
      goto LAB_1004f49ac;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      pcVar6 = "handlerData->devicePrefs.configured";
      goto LAB_1004f4b10;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = 0x45f;
LAB_1004f49ac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

