/* { dg-do compile } */
/* { dg-additional-options "-mharden-sls=retbr -march=armv8.3-a" } */

/* Testing the do_return pattern for retaa and retab.  */
long retbr_subcall(void);
long retbr_do_return_retaa(void)
{
    return retbr_subcall()+1;
}

/* Ensure there are no BR or RET instructions which are not directly followed
   by a speculation barrier.  */
/* { dg-final { scan-assembler-not "\t(br|ret|retaa)\tx\[0-9\]\[0-9\]?\n\t(?!dsb\tsy\n\tisb|sb)" } } */
/* { dg-final { scan-assembler-not "ret\t" } } */
