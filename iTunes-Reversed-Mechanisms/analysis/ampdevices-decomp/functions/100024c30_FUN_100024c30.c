// name: FUN_100024c30
// address: 100024c30

void FUN_100024c30(undefined8 param_1,long param_2,uint param_3,int param_4)

{
  int in_EAX;
  uint uVar1;
  uint unaff_R12D;
  bool bVar2;
  
  uVar1 = in_EAX * 2 + 0x8691a69e;
  uVar1 = (unaff_R12D ^ uVar1 ^ 0xbcbf3fe1) + (uVar1 & 0x3cbf3ff6) * 2 + 0xa72c3536;
  bVar2 = param_3 < uVar1;
  if (param_3 < 0x63eb752d != uVar1 < 0x63eb752d) {
    bVar2 = uVar1 < 0x63eb752d;
  }
                    /* WARNING: Could not recover jumptable at 0x000100024ca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)(&switchD_10001f9d9::switchdataD_1006d2190)
                  [(int)(param_4 + 0x481504a6 + (uint)bVar2)] + param_2))();
  return;
}

