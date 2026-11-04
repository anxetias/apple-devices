// name: FUN_100082d40
// address: 100082d40

undefined8 FUN_100082d40(long param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_2 + 4) == 0xf0e3c18;
  switch(bVar2) {
  case false:
    return 0xffff5bde;
  case true:
    *(uint *)(param_1 + 0x10) =
         (**(byte **)(param_2 + 8) ^ 0xfbff4f97) + (**(byte **)(param_2 + 8) & 0xffffff97) * 2 +
         0x3dedb36a;
                    /* WARNING: Could not emulate address calculation at 0x000100070300 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((long)*(int *)(&DAT_1006e8650 +
                                     (long)(int)(((uint)!bVar2 * 0x31555d27 - (uint)bVar2) + 1) * 4)
                      + 0x1000702d1))();
    return uVar1;
  }
}

