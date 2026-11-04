// name: FUN_1001821cb
// address: 1001821cb

void FUN_1001821cb(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long local_58;
  long local_50;
  ulong local_48;
  long lStack_40;
  ulong local_38;
  
  if (((DAT_1008c4dc1 == '\x01') && (DAT_1008c4dc0 == '\x01')) && (DAT_1008c4db0 != (long *)0x0)) {
    plVar4 = DAT_1008c4db0;
    do {
      if ((char)plVar4[4] == '\x01') {
        for (lVar3 = FUN_100181923(); lVar3 != 0; lVar3 = FUN_100181973(lVar3)) {
          lVar1 = lVar3 + 0x18;
          uVar2 = FUN_100181e82(lVar1);
          if ((*(uint *)(plVar4 + 2) & uVar2) != 0) {
            local_48 = (ulong)*(uint *)(lVar3 + 0x14);
            lStack_40 = lVar3 + 0x480;
            local_38 = (ulong)*(byte *)(lVar3 + 0x687);
            local_58 = lVar1;
            local_50 = lVar1;
            (*(code *)plVar4[3])(plVar4,0x6d6e7420,&local_58,plVar4[5]);
          }
          *(undefined1 *)(lVar3 + 0x682) = 0;
        }
        *(undefined1 *)(plVar4 + 4) = 0;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}

