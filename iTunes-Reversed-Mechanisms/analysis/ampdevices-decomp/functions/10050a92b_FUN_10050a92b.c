// name: FUN_10050a92b
// address: 10050a92b

void FUN_10050a92b(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  long local_48;
  undefined8 local_40;
  long local_38;
  
  if (*(char *)(param_1 + 0x363) != '\0') {
    FUN_100313e0b(*(undefined8 *)(param_1 + 0x30));
    lVar5 = FUN_1002ba294(*(undefined8 *)(param_1 + 0x30),0xb,1);
    if (lVar5 != 0) {
      FUN_1001b7a44(local_58);
      local_48 = param_2;
      if (param_3 == 0) {
        FUN_10047745d(&local_40,param_2);
        FUN_1001b80b2(local_58,&local_40);
      }
      else {
        FUN_10047745d(&local_40,param_3);
        FUN_1001b80b2(local_58,&local_40);
      }
      FUN_1001b7a50(&local_40);
      cVar3 = FUN_1001b8428(local_58);
      if (cVar3 == '\0') {
        lVar7 = *(long *)(*(long *)(lVar5 + 0x78) + 8);
        local_60 = lVar5;
        if (lVar7 != 0) {
          do {
            if ((*(long *)(lVar7 + 8) != 0) && ((*(byte *)(*(long *)(lVar7 + 8) + 0xc5) & 4) != 0))
            {
              FUN_10047745d(&local_40);
              iVar4 = FUN_1001b9c66(&local_40,local_58);
              FUN_1001b7a50(&local_40);
              lVar5 = local_60;
              if (iVar4 == 0) goto LAB_10050aa88;
            }
            lVar7 = *(long *)(lVar7 + 0x18);
          } while (lVar7 != 0);
        }
        lVar5 = local_60;
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        uVar6 = FUN_1002fa216(*(undefined8 *)(local_60 + 8));
        lVar7 = FUN_1002bb612(uVar1,local_58,uVar6);
        if (lVar7 != 0) {
          *(byte *)(local_48 + 0xc5) = *(byte *)(local_48 + 0xc5) | 8;
          lVar7 = FUN_100489a1f(lVar5,lVar7,0,0);
          if (lVar7 != 0) {
LAB_10050aa88:
            lVar10 = *(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x70) + 0x38);
            local_40 = *(undefined8 *)(lVar5 + 0x78);
            lVar8 = lVar7;
            do {
              lVar2 = *(long *)(lVar8 + 0x18);
              local_38 = lVar8;
              if (lVar2 == 0) break;
              lVar8 = FUN_1002ba707(*(undefined8 *)(lVar2 + 8));
              if (lVar8 == 0) {
                lVar9 = 0;
              }
              else {
                lVar9 = FUN_1002ba359(lVar8);
              }
              lVar8 = lVar2;
            } while (lVar9 == lVar10);
            lVar10 = FUN_100489a1f(lVar5,local_48,&local_40,0);
            if (lVar10 != 0) {
              local_70 = *(undefined8 *)(lVar10 + 0x28);
              local_68 = *(undefined8 *)(lVar7 + 0x28);
              FUN_1002bbb84(lVar5 + 0x4a0,&local_70);
            }
          }
        }
      }
      FUN_1001b7a50(local_58);
      param_2 = local_48;
    }
    FUN_1002fbbfc(*(undefined8 *)(param_1 + 0x30));
    if (*(char *)(param_1 + 0x14d2a) == '\0') {
      return;
    }
  }
  FUN_100480385(param_2,1);
  return;
}

