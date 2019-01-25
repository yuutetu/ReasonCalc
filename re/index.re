open BsReactNative;

/* here we define some styles */
module Styles = {
  open Style;

  let container =
    style([
      flex(1.),
      justifyContent(Center),
      alignItems(Stretch),
      backgroundColor(String("tomato")),
    ]);

  let text = style([
    color(String("#fff")),
    fontSize(Float(24.)),
    textAlign(Center),
    padding(Pt(20.))
  ]);

  let buttonContainer = style([
    color(String("#f00")),
    height(Pt(500.)),
    backgroundColor(String("blue"))
  ]);
};

module Main = {
  let component = ReasonReact.statelessComponent("Main");

  let make = _children => {
    ...component,
    render: _self =>
      <View style=Styles.container>
        <Text style=Styles.text>
          (ReasonReact.string("Let's play with ReasonML!"))
        </Text>
        <View style = Styles.buttonContainer>
        </View>
      </View>,
  };
};

let app = () => <Main />;
