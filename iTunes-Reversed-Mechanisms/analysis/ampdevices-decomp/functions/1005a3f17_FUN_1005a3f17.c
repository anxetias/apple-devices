// name: FUN_1005a3f17
// address: 1005a3f17

undefined8
FUN_1005a3f17(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  uint uVar2;
  undefined2 local_24a;
  undefined1 local_248 [32];
  undefined2 local_228;
  undefined1 local_226 [518];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == '\0') {
    local_24a = 0x2d;
    FUN_1001e40a7(param_3,&local_228,local_248);
    cVar1 = FUN_1001e4e7c("plist",local_248,1);
    if (cVar1 != '\0') {
      uVar2 = FUN_1001e4f5a(local_226,local_228,&local_24a,1,0);
      if (uVar2 != 0) {
        *(undefined2 *)(local_226 + (ulong)uVar2 * 2 + -2) = 0x5f;
        FUN_1001658ba(*(undefined8 *)(param_5 + 8),&local_228);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

