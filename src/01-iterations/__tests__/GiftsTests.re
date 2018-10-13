open Jest;
open Expect;

describe("Gifts", () => {
  test("to work in a very strange wedding", () =>
    expect(Gifts.(solution([None, None]))) |> toBe((0., 2))
  );
  test("to work in a tiny wedding", () =>
    expect(
      Gifts.(
        solution([None, Some(420.), Some(5000.), Some(20.5), None])
      ),
    )
    |> toBe((5440.5, 2))
  );
});