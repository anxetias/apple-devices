// name: FUN_1002a90a4
// address: 1002a90a4

undefined8 FUN_1002a90a4(undefined8 param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int in_stack_00000008;
  long in_stack_00000018;
  uint in_stack_00000020;
  undefined1 local_138;
  undefined1 auStack_137 [263];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((in_stack_00000008 == 0x55464900) || (in_stack_00000008 == 0x55464944)) ||
     (in_stack_00000008 == 0x55464920)) {
    uVar3 = (int)in_stack_00000020 >> 0x1f & in_stack_00000020;
    lVar5 = 0;
    do {
      if ((int)in_stack_00000020 < 1) {
        local_138 = (undefined1)lVar5;
        in_stack_00000018 = in_stack_00000018 + lVar5;
        goto LAB_1002a9132;
      }
      in_stack_00000020 = in_stack_00000020 - 1;
      auStack_137[lVar5] = *(undefined1 *)(in_stack_00000018 + lVar5);
      lVar7 = lVar5 + 1;
      pcVar1 = (char *)(in_stack_00000018 + 1 + lVar5);
      lVar5 = lVar7;
    } while (*pcVar1 != '\0');
    local_138 = (undefined1)lVar7;
    in_stack_00000018 = in_stack_00000018 + lVar7 + 1;
    uVar3 = in_stack_00000020;
LAB_1002a9132:
    cVar2 = FUN_1001df6e9(param_2 + 0x28,&local_138,0);
    if ((cVar2 != '\0') ||
       ((cVar2 = FUN_1001df6e9(&local_138,"$http://www.cddb.com/id3/taginfo.html",0), cVar2 != '\0'
        && (cVar2 = FUN_1001df6e9(param_2 + 0x28,"%http://www.cddb.com/id3/taginfo1.html",0),
           cVar2 != '\0')))) {
      uVar6 = *(uint *)(param_2 + 0x130);
      uVar4 = uVar6;
      if (uVar3 < uVar6) {
        uVar4 = uVar3;
      }
      lVar5 = *(long *)(param_2 + 0x128);
      if (uVar4 != 0 && lVar5 != 0) {
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        lVar7 = 0;
        do {
          if (*(char *)(in_stack_00000018 + lVar7) == '\0') {
            uVar4 = (uint)lVar7;
            break;
          }
          *(char *)(lVar5 + lVar7) = *(char *)(in_stack_00000018 + lVar7);
          lVar7 = lVar7 + 1;
        } while (uVar6 != (uint)lVar7);
      }
      *(uint *)(param_2 + 0x134) = uVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

