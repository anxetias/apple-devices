// name: FUN_1000c70b0
// address: 1000c70b0

undefined8 FUN_1000c70b0(long param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  
  bVar4 = *(int *)(param_2 + 4) == 0xf0e3c24;
  switch(bVar4) {
  case false:
    return 0xffff5bde;
  case true:
    lVar1 = *(long *)(param_1 + 0x60);
    puVar2 = *(undefined1 **)(param_2 + 8);
    *(undefined1 *)(lVar1 + 0x1c0) = puVar2[0xc];
    *(undefined1 *)(lVar1 + 0x1bf) = puVar2[0xb];
    *(undefined1 *)(lVar1 + 0x1be) = puVar2[10];
    *(undefined1 *)(lVar1 + 0x1bd) = puVar2[9];
    *(undefined1 *)(lVar1 + 0x1bc) = puVar2[8];
    *(undefined1 *)(lVar1 + 0x1bb) = puVar2[7];
    *(undefined1 *)(lVar1 + 0x1ba) = puVar2[6];
    *(undefined1 *)(lVar1 + 0x1b9) = puVar2[5];
    *(undefined1 *)(lVar1 + 0x1b8) = puVar2[4];
    *(undefined1 *)(lVar1 + 0x1b7) = puVar2[3];
    *(undefined1 *)(lVar1 + 0x1b6) = puVar2[2];
    *(undefined1 *)(lVar1 + 0x1b5) = puVar2[1];
    *(undefined1 *)(lVar1 + 0x1b4) = *puVar2;
                    /* WARNING: Could not emulate address calculation at 0x0001000c57ad */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)((long)(int)(&switchD_1000c70e2::switchdataD_1006f0c20)
                                  [(int)((uint)!bVar4 * 0x31ec0c5f + (uint)bVar4 * 2)] + 0x1000c5720
                      ))();
    return uVar3;
  }
}

