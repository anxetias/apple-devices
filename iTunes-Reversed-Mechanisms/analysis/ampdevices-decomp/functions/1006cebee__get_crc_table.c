// name: _get_crc_table
// address: 1006cebee

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uLongf * _get_crc_table(void)

{
  uLongf *puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cebee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (uLongf *)(*(code *)PTR__get_crc_table_10082e948)();
  return puVar1;
}

