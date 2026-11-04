// name: FUN_100268cba
// address: 100268cba

undefined8 FUN_100268cba(long param_1,long param_2,int *param_3)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "outBuffer != nullptr";
LAB_100268e7c:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else if (param_3 == (int *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "ioBufferSize != nullptr";
      goto LAB_100268e7c;
    }
  }
  else {
    if (*param_3 == 0xff) {
      FUN_1001c62d9(param_2,0xff);
      *param_3 = 0;
      if (param_1 == 0) {
        bVar6 = *(byte *)(param_2 + 5);
      }
      else {
        lVar3 = FUN_100170ef7(param_1);
        if (0xf9 < lVar3) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_3a = "JRCFDataGetLength(antiReplayData) <= 249";
            goto LAB_100268e7c;
          }
          goto LAB_100268ea1;
        }
        uVar1 = FUN_100170ef7(param_1);
        *(undefined1 *)(param_2 + 5) = uVar1;
        pvVar4 = (void *)FUN_100170f3b(param_1);
        bVar6 = *(byte *)(param_2 + 5);
        _memcpy((void *)(param_2 + 6),pvVar4,(ulong)bVar6);
      }
      *(undefined1 *)(param_2 + 4) = 0x25;
      *param_3 = bVar6 + 6;
      uVar5 = 0;
      goto LAB_100268eaf;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "*ioBufferSize == 255";
      goto LAB_100268e7c;
    }
  }
LAB_100268ea1:
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_100268eaf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

