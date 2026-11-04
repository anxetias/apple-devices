// name: FUN_100117b3e
// address: 100117b3e

undefined4 FUN_100117b3e(undefined4 *param_1,uint param_2,char param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if (param_2 < 0xd) {
    uVar1 = *(undefined4 *)(&DAT_1007041b0 + (ulong)param_2 * 4);
    *param_1 = uVar1;
    return uVar1;
  }
  if ((param_2 < 0x10 || param_3 == '\0') && (param_2 < 0xf || param_3 != '\0')) {
    return *param_1;
  }
  puVar2 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar2 = "Error in MP4SampleRate::deserialize(): illegal sample rate index";
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar2,PTR_typeinfo_10082c990,0);
}

