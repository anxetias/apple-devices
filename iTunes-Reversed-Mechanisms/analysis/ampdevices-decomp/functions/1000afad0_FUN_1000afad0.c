// name: FUN_1000afad0
// address: 1000afad0

void FUN_1000afad0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (((uint)param_1 & 0xaa85211) * -2 + (uint)param_1 + 0xaa85211 ^ 0xaa64142b) * 0x66d92ebf ^
          *param_1;
  iVar2 = (**(code **)((&PTR_DAT_10082ee00)[(int)(uVar1 + 0xa6f176c7)] + -3))
                    (*(int *)((&PTR_DAT_10082ee00)[(int)(uVar1 + 0xa6f176b0)] + 0x52) + -0x68800dc4,
                     *(undefined8 *)((&PTR_DAT_10082ee00)[(int)(uVar1 + 0xa6f176b0)] + 10),
                     *(undefined8 *)(param_1 + 4));
  param_1[1] = (iVar2 - (iVar2 * 2 & 0x746805bcU)) + 0x3a3402de;
  return;
}

