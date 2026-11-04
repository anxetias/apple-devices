// name: FUN_100039700
// address: 100039700

undefined8 FUN_100039700(long param_1,long param_2)

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
    *(undefined1 *)(lVar1 + 0x1d4) = puVar2[0xc];
    *(undefined1 *)(lVar1 + 0x1d3) = puVar2[0xb];
    *(undefined1 *)(lVar1 + 0x1d2) = puVar2[10];
    *(undefined1 *)(lVar1 + 0x1d1) = puVar2[9];
    *(undefined1 *)(lVar1 + 0x1d0) = puVar2[8];
    *(undefined1 *)(lVar1 + 0x1cf) = puVar2[7];
    *(undefined1 *)(lVar1 + 0x1ce) = puVar2[6];
    *(undefined1 *)(lVar1 + 0x1cd) = puVar2[5];
    *(undefined1 *)(lVar1 + 0x1cc) = puVar2[4];
    *(undefined1 *)(lVar1 + 0x1cb) = puVar2[3];
    *(undefined1 *)(lVar1 + 0x1ca) = puVar2[2];
    *(undefined1 *)(lVar1 + 0x1c9) = puVar2[1];
    *(undefined1 *)(lVar1 + 0x1c8) = *puVar2;
                    /* WARNING: Could not emulate address calculation at 0x00010005a4b3 */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)((long)(int)(&switchD_100039732::switchdataD_1006da254)
                                  [(int)((uint)!bVar4 * 0x3175dd1d + (uint)bVar4 * 2)] + 0x10005a426
                      ))();
    return uVar3;
  }
}

