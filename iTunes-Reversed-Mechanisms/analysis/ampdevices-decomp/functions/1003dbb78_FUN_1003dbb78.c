// name: FUN_1003dbb78
// address: 1003dbb78

undefined8 FUN_1003dbb78(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100466c53(param_1,local_128);
  cVar1 = FUN_1001df7be("aif",local_128,1);
  uVar3 = 0x41494646;
  uVar2 = 0;
  if (cVar1 == '\0') {
    cVar1 = FUN_1001df7be("aiff",local_128,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_1001df7be("aifc",local_128,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_1001df7be("cdda",local_128,1);
        uVar2 = 0;
        if (cVar1 == '\0') {
          cVar1 = FUN_1001df7be("wave",local_128,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_1001df7be("wav",local_128,1);
            if (cVar1 == '\0') {
              uVar3 = 0x3f3f3f3f;
              uVar2 = 0xffffffce;
              goto LAB_1003dbc5f;
            }
          }
          uVar3 = 0x57415645;
        }
      }
    }
  }
LAB_1003dbc5f:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

