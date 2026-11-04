// name: FUN_1003d425b
// address: 1003d425b

void FUN_1003d425b(long param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [520];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0x696d7074) {
    cVar1 = *(char *)(*(long *)(param_1 + 0x20) + 0x2b5);
    if (cVar1 == '\x06') {
      uVar3 = 0x110e002f;
    }
    else {
      if (cVar1 != '\x02') goto LAB_1003d434e;
      uVar3 = 0x110e0031;
    }
    FUN_1001c334a(local_228,uVar3);
    FUN_1001b80b2(param_3,local_228);
    FUN_1001b7a50(local_228);
    lVar2 = *(long *)(param_1 + 0x20);
    if ((*(char *)(lVar2 + 0x2b5) == '\x02') && (*(char *)(lVar2 + 0x8d0) != '\0')) {
      FUN_10018e72c(lVar2 + 0x8e8,local_228);
      FUN_1001b8dfc(local_238,local_228);
      FUN_1001bbec4(local_248,param_3,local_238);
      FUN_1001b80b2(param_3,local_248);
      FUN_1001b7a50(local_248);
      FUN_1001b7a50(local_238);
    }
  }
LAB_1003d434e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

