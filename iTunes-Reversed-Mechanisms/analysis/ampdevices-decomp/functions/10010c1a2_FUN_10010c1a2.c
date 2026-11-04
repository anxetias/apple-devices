// name: FUN_10010c1a2
// address: 10010c1a2

ulong FUN_10010c1a2(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)param_2;
  ___bzero(param_1 + 0xbb0,0x18780);
  uVar7 = (ulong)(4 - (param_3 >> 8 & 0xf));
  ___bzero(param_1 + 0x19398,0x17d4);
  *(uint *)(param_1 + 0x48) = param_3;
  lVar1 = *(long *)(param_1 + 0x1ac10);
  lVar2 = *(long *)(param_1 + 0x1ac08);
  lVar3 = 0x64ce;
  lVar4 = param_1;
  do {
    *(undefined4 *)(param_1 + lVar3 * 4) = 0;
    *(long *)(param_1 + 0xba8) = lVar4 + 0xbb0;
    lVar5 = lVar4 + (ulong)param_3 * 4 + 0x1920;
    if (0x200 < param_3) {
      lVar5 = 0;
    }
    *(long *)(lVar4 + 0x2920) = lVar5;
    *(undefined8 *)(lVar4 + 0x18d0) = *(undefined8 *)(lVar1 + uVar7 * 0x80 + uVar6 * 8);
    *(undefined8 *)(lVar4 + 0x18d8) = *(undefined8 *)(uVar7 * 0x80 + lVar2 + uVar6 * 8);
    lVar4 = lVar4 + 0x20a0;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x64da);
  *(undefined1 *)(param_1 + 0x1dbba) =
       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x1dbc8) + uVar7 * 8) + uVar6);
  *(undefined1 *)(param_1 + 0x1dbbb) =
       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x1dbc0) + uVar7 * 8) + uVar6);
  return uVar7;
}

