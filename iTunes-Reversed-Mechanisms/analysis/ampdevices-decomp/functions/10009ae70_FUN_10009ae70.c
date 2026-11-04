// name: FUN_10009ae70
// address: 10009ae70

void FUN_10009ae70(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (((uint)param_1 & 0x11a76cc8) * -2 + (uint)param_1 + 0x11a76cc8 ^ 0x1c283091) * 0x3df53769
          ^ param_1[1];
  iVar1 = (*(code *)((&PTR_DAT_10082ee00)[(int)(uVar3 + 0x338e43ec)] + -3))
                    ((&PTR_DAT_10082ee00)[(int)(uVar3 + 0x338e43a5)] + -6,FUN_1000b5600);
  uVar2 = 0xc5cb5860;
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)((&PTR_DAT_10082ee00)[(int)(uVar3 + 0x338e444d)] + -2);
  }
  *param_1 = uVar2;
  return;
}

