// name: FUN_100466330
// address: 100466330

void FUN_100466330(ushort *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  ushort *puVar1;
  ushort uVar2;
  bool bVar3;
  ushort *puVar4;
  char cVar5;
  ushort *puVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort local_238;
  ushort auStack_236 [255];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar1 = param_1 + param_2;
  puVar6 = param_1;
  puVar4 = param_1;
  if (param_2 != 0) {
    bVar3 = false;
    uVar8 = 0;
    uVar9 = 0;
    puVar10 = param_1;
    do {
      uVar2 = *puVar10;
      if (uVar2 == 0x3e) {
        cVar5 = FUN_1001e4e7c("p",&local_238,1);
        if ((((cVar5 != '\0') || (cVar5 = FUN_1001e4e7c("br",&local_238,1), cVar5 != '\0')) ||
            (cVar5 = FUN_1001e4e7c("a",&local_238,1), cVar5 != '\0')) ||
           (cVar5 = FUN_1001e4e7c("li",&local_238,1), cVar5 != '\0')) goto LAB_10046649c;
        uVar8 = uVar8 + 1;
LAB_100466417:
        bVar3 = false;
      }
      else if (uVar2 == 0x3c) {
        uVar9 = uVar9 + 1;
        local_238 = 0;
        bVar3 = true;
      }
      else {
        if ((!bVar3) || (uVar2 == 0x20)) goto LAB_100466417;
        bVar3 = true;
        if (local_238 < 0xff) {
          auStack_236[local_238] = uVar2;
          local_238 = local_238 + 1;
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar1);
    if (((1 < uVar9) && (1 < uVar8)) && (uVar9 == uVar8)) {
LAB_10046649c:
      FUN_10046653c(param_1,param_2,param_3,param_4);
      goto LAB_100466515;
    }
    do {
      if ((0x20 < (ulong)*puVar6) || ((0x100002400U >> ((ulong)*puVar6 & 0x3f) & 1) == 0)) break;
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar1);
  }
  for (; puVar6 < puVar1; puVar6 = puVar6 + 1) {
    uVar2 = *puVar6;
    if (((param_3 & 1) == 0) || ((uVar7 = 0x20, uVar2 != 10 && (uVar2 != 0xd)))) {
      uVar7 = uVar2;
    }
    *puVar4 = uVar7;
    puVar4 = puVar4 + 1;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (int)((ulong)((long)puVar4 - (long)param_1) >> 1);
  }
LAB_100466515:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

