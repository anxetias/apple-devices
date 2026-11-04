// name: FUN_1001da171
// address: 1001da171

int FUN_1001da171(long param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined1 local_4a0 [8];
  long local_498;
  code *local_458;
  undefined4 local_44c;
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)(param_1 + 0x478) = 0;
  *(undefined1 *)(param_1 + 0x479) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 1;
  *(undefined4 *)(param_1 + 0x480) = 1;
  lVar4 = FUN_1001c6429(0x218);
  *(long *)(param_1 + 0x10) = lVar4;
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006b74cf(uVar5);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
    goto LAB_1001da558;
  }
  *(long *)(lVar4 + 0x50) = param_1;
  iVar2 = FUN_1001e9c3e(lVar4);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_1001eaba7(lVar4 + 0x70,0);
      FUN_1001eaba7(lVar4 + 0x58,0);
      uVar3 = *param_2;
      if (0x407 < uVar3) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006b7215(uVar5);
        }
        FUN_1001782e9(0,0);
        uVar3 = *param_2;
      }
      uVar8 = (ulong)uVar3;
      local_44c = param_3;
      _memcpy(local_448,param_2 + 1,uVar8);
      local_448[uVar8] = '\0';
      pcVar6 = _strstr(local_448,"://");
      if (pcVar6 == (char *)0x0) {
        builtin_strncpy(local_448,"http://",7);
        _memcpy(local_448 + 7,param_2 + 1,uVar8);
        uVar8 = (ulong)(uVar3 + 7);
        local_448[uVar8] = '\0';
        uVar9 = local_44c;
      }
      else {
        iVar2 = _strncasecmp(local_448,"daap://",7);
        uVar9 = local_44c;
        if (iVar2 != 0) {
          iVar2 = _strncasecmp(local_448,"daa6://",7);
          if (iVar2 != 0) goto LAB_1001da36c;
        }
        builtin_strncpy(local_448,"http",4);
      }
LAB_1001da36c:
      lVar7 = FUN_10017444a(DAT_1008c4d90,local_448,uVar8,0x8000100,0);
      *(long *)(lVar4 + 0x1e0) = lVar7;
      if (lVar7 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006b73ed(uVar5);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        cVar1 = _CFURLCanBeDecomposed(lVar7);
        if (cVar1 == '\0') {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_1006b728b(uVar5);
          }
          FUN_1001782e9(0,0);
        }
        *(undefined4 *)(lVar4 + 0x88) = uVar9;
        *(undefined8 *)(param_1 + 0x420) = 0x210;
        *(undefined8 *)(param_1 + 0x430) = 0xffffffff00000210;
        lVar7 = FUN_1001ed73c(0,"HTTPStreamCFRunLoopThread");
        *(long *)(lVar4 + 0x48) = lVar7;
        if (lVar7 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_1006b7377(uVar5);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x32;
        }
        else {
          FUN_1001ed72c(lVar7,FUN_1001da5d0,lVar4);
          FUN_1001c62d9(local_4a0,0x50);
          local_458 = FUN_1001da6cd;
          iVar2 = 0;
          local_498 = lVar4;
          lVar7 = FUN_100172c7d(DAT_1008c4d90,0,local_4a0);
          *(long *)(lVar4 + 0x1d8) = lVar7;
          if (lVar7 != 0) {
            FUN_1001728e7(*(undefined8 *)(*(long *)(lVar4 + 0x48) + 0x10),lVar7,
                          *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
            FUN_1001e9de0(lVar4);
            *(undefined4 *)(param_1 + 0x47c) = 0;
            *(undefined1 *)(param_1 + 0x478) = 1;
            FUN_1001e9eb9(lVar4);
            goto LAB_1001da558;
          }
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_1006b7301(uVar5);
          }
          iVar2 = 0;
          FUN_1001782e9(0,0);
          FUN_1001ed939(*(undefined8 *)(lVar4 + 0x48),0);
        }
        FUN_10017060f(*(undefined8 *)(lVar4 + 0x1e0));
      }
      FUN_1001e9d75(lVar4);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006b7463(iVar2,uVar5);
      }
    }
  }
  FUN_1001c64c1(lVar4);
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB_1001da558:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

