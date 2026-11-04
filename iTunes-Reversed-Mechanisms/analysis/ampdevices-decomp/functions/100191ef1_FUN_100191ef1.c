// name: FUN_100191ef1
// address: 100191ef1

undefined8 FUN_100191ef1(char *param_1,long param_2,char param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined1 local_334 [2];
  char acStack_332 [2];
  int local_330;
  uint local_32c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006946e0(uVar5);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
    goto LAB_100192030;
  }
  if (param_3 == '\0') {
LAB_100191f61:
    if ((param_2 != 1) || (pcVar4 = param_1, *param_1 != '/')) {
      pcVar4 = param_1 + param_2;
      do {
        pcVar4 = pcVar4 + -1;
        pcVar1 = pcVar4;
        if (pcVar4 <= param_1) break;
      } while (*pcVar4 == '/');
      for (; (param_1 <= pcVar1 && (*pcVar1 != '/')); pcVar1 = pcVar1 + -1) {
      }
      param_1 = pcVar4;
      pcVar4 = pcVar1 + 1;
    }
  }
  else {
    local_348 = 0;
    local_358 = 5;
    uStack_350 = 0x80002000;
    iVar3 = _getattrlist(param_1,&local_358,local_334,0x30c,0);
    if (iVar3 != 0) goto LAB_100191f61;
    param_1 = (char *)((long)&local_330 + (long)local_330) + ((ulong)local_32c - 2);
    pcVar4 = (char *)((long)&local_330 + (long)local_330);
  }
  FUN_1001b7b34(&local_358,pcVar4,param_1 + (1 - (long)pcVar4));
  FUN_1001b80b2(param_4,&local_358);
  FUN_1001b7a50(&local_358);
  uVar5 = 0;
LAB_100192030:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

