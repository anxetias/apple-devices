// name: FUN_1005c726a
// address: 1005c726a

int FUN_1005c726a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 void *param_5,long param_6,undefined8 param_7,char param_8)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = 0x2329;
  if (DAT_1008c3011 == '\0') {
    if (DAT_1008c3020 != -1) {
      _dispatch_once_f(&DAT_1008c3020,(void *)0x0,FUN_1005c74cd);
    }
    puVar4 = (undefined8 *)FUN_1001c629e(0x8e0,&DAT_100711c6e);
    if (puVar4 == (undefined8 *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "workTaskInfo != __null";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x6c;
    }
    else {
      puVar4[6] = 0;
      *puVar4 = 0;
      puVar4[10] = 0;
      puVar4[8] = FUN_1005c753d;
      puVar4[9] = puVar4;
      if (param_5 != (void *)0x0) {
        _memcpy(puVar4 + 0xc,param_5,0x410);
      }
      uVar5 = FUN_1001705fc(param_1);
      puVar4[0x8e] = uVar5;
      uVar5 = FUN_1001705fc(param_2);
      puVar4[0x8f] = uVar5;
      uVar5 = FUN_1001705fc(param_3);
      puVar4[0x90] = uVar5;
      *(undefined4 *)(puVar4 + 0x92) = param_4;
      *(undefined4 *)((long)puVar4 + 0x494) = 1;
      puVar4[0x118] = param_6;
      puVar4[0x119] = param_7;
      if (param_6 == 0 || param_8 != '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_1001ee056();
      }
      *(undefined1 *)(puVar4 + 0x11a) = uVar1;
      iVar3 = FUN_1001ecf95(DAT_1008c3028,puVar4);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

