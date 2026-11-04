// name: FUN_1002a8ec0
// address: 1002a8ec0

undefined8 FUN_1002a8ec0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int in_stack_00000008;
  char *in_stack_00000018;
  int in_stack_00000020;
  undefined1 local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((((in_stack_00000008 == 0x434f4d00) || (in_stack_00000008 == 0x434f4d4d)) ||
       (in_stack_00000008 == 0x434f4d20)) &&
      ((FUN_100427e75(param_1 + 4,in_stack_00000018,in_stack_00000020,local_128,0xff),
       4 < in_stack_00000020 && in_stack_00000018 != (char *)0x0 && (*in_stack_00000018 == '\0'))))
     && ((cVar3 = FUN_100427e21(in_stack_00000018 + 1), cVar3 != '\0' &&
         (cVar3 = FUN_1001df6e9(param_2 + 0x28,local_128,0), cVar3 != '\0')))) {
    in_stack_00000018 = in_stack_00000018 + 4;
    uVar6 = (ulong)(in_stack_00000020 - 5) + 1;
    do {
      uVar1 = uVar6 - 1;
      cVar3 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + 1;
      if (cVar3 == '\0') break;
      uVar8 = (uint)uVar6;
      uVar6 = uVar1;
    } while (1 < uVar8);
    uVar8 = *(uint *)(param_2 + 0x130);
    uVar4 = (uint)uVar1;
    uVar5 = uVar8;
    if (uVar4 < uVar8) {
      uVar5 = uVar4;
    }
    lVar2 = *(long *)(param_2 + 0x128);
    if ((lVar2 != 0) && (uVar5 != 0)) {
      uVar6 = (ulong)uVar8;
      if (uVar1 < uVar8) {
        uVar6 = uVar1;
      }
      lVar7 = 0;
      do {
        if (in_stack_00000018[lVar7] == '\0') {
          uVar5 = (uint)lVar7;
          break;
        }
        *(char *)(lVar2 + lVar7) = in_stack_00000018[lVar7];
        lVar7 = lVar7 + 1;
      } while ((int)uVar6 != (int)lVar7);
    }
    *(uint *)(param_2 + 0x134) = uVar5;
    *(uint *)(param_2 + 0x138) = uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

