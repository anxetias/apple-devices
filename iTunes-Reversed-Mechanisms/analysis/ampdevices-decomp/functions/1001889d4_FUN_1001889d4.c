// name: FUN_1001889d4
// address: 1001889d4

undefined8
FUN_1001889d4(undefined8 param_1,undefined8 param_2,uint param_3,undefined1 *param_4,char *param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char local_6b0 [84];
  uint local_65c;
  undefined1 local_658 [1056];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = local_658;
  if (param_4 != (undefined1 *)0x0) {
    puVar3 = param_4;
  }
  pcVar4 = param_5;
  if (param_5 == (char *)0x0) {
    pcVar4 = local_6b0;
  }
  local_65c = param_3;
  FUN_1001bb41a(param_2,local_238);
  uVar1 = FUN_10017ecc9(param_1,local_238,puVar3,pcVar4);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
    if (*pcVar4 == '\0') {
      pcVar2 = local_6b0;
      if (param_5 != (char *)0x0) {
        pcVar2 = param_5;
      }
      if (*(short *)(pcVar2 + 0x38) < 0) {
        uVar1 = FUN_100188aa6(puVar3,puVar3,local_65c & 0xff,pcVar4,0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

